#include <stdio.h>
#include <string.h>
#include "sqlite/sqlite3.h"
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void updateLogoutTime(sqlite3* db) {
    time_t currentTime;
    time(&currentTime);
    struct tm currentTimeStruct;
    localtime_s(&currentTimeStruct, &currentTime);
    char currentTimeString[50];
    strftime(currentTimeString, sizeof(currentTimeString), "%Y-%m-%d %H:%M:%S", &currentTimeStruct);

    char sql[100];
    sprintf_s(sql, sizeof(sql), "UPDATE Audit SET LogoutTime='%s'", currentTimeString);

    int rc = sqlite3_exec(db, sql, NULL, 0, NULL);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
    }
}

void displayFileContent(const char* fileName) {
    FILE* file;
    if (fopen_s(&file, fileName, "r") != 0) {
        printf("Error opening file.\n");
        return;
    }

    printf("File Content:\n");

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
}

void invoiceList() {
    printf("Invoice List:\n");
    printf("1. Hakan Uslu.inv\n");
    printf("2. Ayse Yavuz.inv\n");
    printf("3. Hýzlý Ticaret.inv\n");

    int choice;
    printf("Enter a number or press ESC to go back: ");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        displayFileContent("Hakan Uslu.inv");
        Sleep(10000);
        break;
    case 2:
        displayFileContent("Ayse Yavuz.inv");
        Sleep(10000);
        break;
    case 3:
        displayFileContent("Hizli Ticaret.inv");
        Sleep(10000);
        break;
    default:
        printf("Record not found.\n");
        Sleep(2000);
        break;
    }
}

int main() {
    sqlite3* db;
    sqlite3_stmt* stmt;

    int rc = sqlite3_open("upload_system.db", &db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        return 1;
    }

    char username[50];
    char password[50];

    while (1) {
        printf("Enter Username: ");
        scanf_s("%s", username, sizeof(username));

        printf("Enter Password: ");
        scanf_s("%s", password, sizeof(password));

        char sql[100];
        sprintf_s(sql, sizeof(sql), "SELECT * FROM users WHERE NameSurname='%s' AND Password='%s'", username, password);

        rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
        if (rc != SQLITE_OK) {
            fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
            return rc;
        }

        rc = sqlite3_step(stmt);
        if (rc == SQLITE_ROW) {
            printf("Login successful.\n");
            Sleep(2000);

            time_t currentTime;
            time(&currentTime);
            struct tm currentTimeStruct;
            localtime_s(&currentTimeStruct, &currentTime);
            char currentTimeString[50];
            strftime(currentTimeString, sizeof(currentTimeString), "%Y-%m-%d %H:%M:%S", &currentTimeStruct);

            sprintf_s(sql, sizeof(sql), "INSERT INTO Audit (LoginTime) VALUES ('%s')", currentTimeString);
            rc = sqlite3_exec(db, sql, NULL, 0, NULL);
            if (rc != SQLITE_OK) {
                fprintf(stderr, "SQL error: %s\n", sqlite3_errmsg(db));
                return rc;
            }

            // Send Hello message to the server
            printf("<Hello>%s</Hello>\n", username);

            // Receive response from the server
            char serverResponse[100];
            printf("Waiting for server response...\n");
            fflush(stdin); // Clear input buffer
            fgets(serverResponse, sizeof(serverResponse), stdin);
            serverResponse[strcspn(serverResponse, "\n")] = '\0'; // Remove newline character
            printf("Server response: %s\n", serverResponse);

            int choice = 0;
            while (choice != 2) {
                printf("Select Operation:\n");
                printf("1. Invoice List\n");
                printf("2. Logout\n");

                printf("Enter your choice: ");
                scanf_s("%d", &choice);

                switch (choice) {
                case 1:
                    invoiceList();
                    break;

                case 2:
                    printf("Logout\n");
                    updateLogoutTime(db);
                    break;

                default:
                    printf("Invalid choice. Try again.\n");
                    break;
                }
            }
        }
        else {
            printf("Login failed. Please try again.\n");
            Sleep(2000);
        }

        sqlite3_finalize(stmt);
    }

    sqlite3_close(db);

    return 0;
}
