#include <stdio.h>
#include <string.h>
struct Ogrenci {
	char Adi[20];
	char Soyadi[20];
	int mat[10];
	int fen[10];
	int sos[10];
	int ortalama;
	
};

int notAl(struct Ogrenci *hesapla)
{
	
	for(int i=0;i<2;i++){
		printf("%d. orencinin adini ve soyadini giriniz =",i+1);  scanf("%s %s",hesapla->Adi,hesapla->Soyadi);
		printf("%d. orencinin notlarini giriniz =",i+1);  scanf("%d %d %d",&hesapla->mat[i],&hesapla->fen[i],&hesapla->sos[i]);
	    
	}
	
	  
	
}

void OrtHesapla(struct Ogrenci  *hesapla)
{
	
	
	for(int i=0;i<2;i++){
	   hesapla->ortalama =(hesapla->mat[i]+hesapla->fen[i]+hesapla->sos[i])/3;
	   printf("%d.ogrencinin ortalamasi = %d\n",i+1,hesapla->ortalama);
	  
	   
	}
	
	
}

int main(){
	struct Ogrenci ogr1;
       
	notAl(&ogr1);
	OrtHesapla(&ogr1);
	
	
	
}
