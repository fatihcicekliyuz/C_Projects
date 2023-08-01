#include<stdio.h>
#include<time.h>
#include<string.h>

void orthesapla(int mat,int tr,char *ogr1,char *ogr2)
{
	
	int ortalamalar;
	ortalamalar= (mat+tr)/2;
	printf("%s adli ogrencinin ortalamasi = %d",ogr1,ortalamalar);
}

int main(){
	
char ogr1[50],ogr2[50];  scanf("%s %s",&ogr1, &ogr2);


int mat =50;
int tr =40;

orthesapla(mat,tr,ogr1,ogr2);


 
}
