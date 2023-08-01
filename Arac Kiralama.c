#include<stdio.h>
#include<string.h>
#define BOYUT 5

char dizi[BOYUT],dizi1[BOYUT];
int top;

struct AracKirala {
	char aracismi[50];
	char MusteriAdi[50];
	int  AracFiyati[50];
		
};

void push(struct AracKirala *giris){
	for(int i=0;i<2;i++){
		
		if(top+1==BOYUT){
			printf("stack dolu\n");
		}
		else
		{
			
			top=top+1;
			printf("Adinizi giriniz: ");                   scanf("%s",&giris->MusteriAdi);
			
			printf("\nArac isimini giriniz: ");             scanf("%s",&giris->aracismi);
			strcpy(dizi,giris->MusteriAdi);
			strcpy(dizi1,giris->aracismi);
			 printf("\ntalep ettiginiz fiyati giriniz: ");   scanf("%d",&giris->AracFiyati[i]);
		     printf("\n");
		}
		
		     
		     
		
	}
	
}
void MusteriGoster(struct AracKirala *goster){
	for(int i=0;i<2;i++){
		
			printf("\n %d.musteri bilgileri = \n %s\n %s\n %d",i+1,dizi,dizi1,goster->AracFiyati[i]);
			
		
		
	}
	
}


int main() {
	struct AracKirala giris;
	top=-1;
	
	push(&giris);
	MusteriGoster(&giris);
}
