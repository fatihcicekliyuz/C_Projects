#include <stdio.h>
int fun(int *gelen,int b,int gelen_sayi) //bu k�s�mda fonksiyon ile verileri �ekip sonras�nda for d�ng�s� ile en b�y�k buluyoruz ve sonras�nda ekrana yazd�r�yoruz
{
	printf("Adi    : Fatih \n"); 
	printf("Soyadi : Cicekliyuz\n");
	printf("Tarih  : 16.04.2023\n");
	
	  int carpim_sonucu=gelen[0];
      for(int x=0;x<b;x++){
     	if(gelen[x]<gelen[x+1]){
  	      carpim_sonucu=gelen[x+1];
	  }
  	
  }
 printf("%d ardisik carpim sonucu = %d \n",gelen_sayi,carpim_sonucu);
 
	
}


main()
{
 int buffer[1000]={
6,4,0,7,7,1,7,6,5,3,1,3,3,0,6,2,4,9,1,9,2,2,5,1,1,9,6,7,4,4,2,6,5,7,4,7,4,2,3,5,5,3,4,9,1,9,4,9,3,4,
9,6,9,8,3,5,2,0,3,1,2,7,7,4,5,0,6,3,2,6,2,3,9,5,7,8,3,1,8,0,1,6,9,8,4,8,0,1,8,6,9,4,7,8,8,5,1,8,4,3,
8,5,8,6,1,5,6,0,7,8,9,1,1,2,9,4,9,4,9,5,4,5,9,5,0,1,7,3,7,9,5,8,3,3,1,9,5,2,8,5,3,2,0,8,8,0,5,5,1,1,
1,2,5,4,0,6,9,8,7,4,7,1,5,8,5,2,3,8,6,3,0,5,0,7,1,5,6,9,3,2,9,0,9,6,3,2,9,5,2,2,7,4,4,3,0,4,3,5,5,7,
6,6,8,9,6,6,4,8,9,5,0,4,4,5,2,4,4,5,2,3,1,6,1,7,3,1,8,5,6,4,0,3,0,9,8,7,1,1,1,2,1,7,2,2,3,8,3,1,1,3,
6,2,2,2,9,8,9,3,4,2,3,3,8,0,3,0,8,1,3,5,3,3,6,2,7,6,6,1,4,2,8,2,8,0,6,4,4,4,4,8,6,6,4,5,2,3,8,7,4,9,
3,0,3,5,8,9,0,7,2,9,6,2,9,0,4,9,1,5,6,0,4,4,0,7,7,2,3,9,0,7,1,3,8,1,0,5,1,5,8,5,9,3,0,7,9,6,0,8,6,6,
7,0,1,7,2,4,2,7,1,2,1,8,8,3,9,9,8,7,9,7,9,0,8,7,9,2,2,7,4,9,2,1,9,0,1,6,9,9,7,2,0,8,8,8,0,9,3,7,7,6,
6,5,7,2,7,3,3,3,0,0,1,0,5,3,3,6,7,8,8,1,2,2,0,2,3,5,4,2,1,8,0,9,7,5,1,2,5,4,5,4,0,5,9,4,7,5,2,2,4,3,
5,2,5,8,4,9,0,7,7,1,1,6,7,0,5,5,6,0,1,3,6,0,4,8,3,9,5,8,6,4,4,6,7,0,6,3,2,4,4,1,5,7,2,2,1,5,5,3,9,7,
5,3,6,9,7,8,1,7,9,7,7,8,4,6,1,7,4,0,6,4,9,5,5,1,4,9,2,9,0,8,6,2,5,6,9,3,2,1,9,7,8,4,6,8,6,2,2,4,8,2,
8,3,9,7,2,2,4,1,3,7,5,6,5,7,0,5,6,0,5,7,4,9,0,2,6,1,4,0,7,9,7,2,9,6,8,6,5,2,4,1,4,5,3,5,1,0,0,4,7,4,
8,2,1,6,6,3,7,0,4,8,4,4,0,3,1,3,9,8,9,0,0,0,8,8,9,5,2,4,3,4,5,0,6,5,8,5,4,1,2,2,7,5,8,8,6,6,6,8,8,1,
1,6,4,2,7,1,7,1,4,7,9,9,2,4,4,4,2,9,2,8,2,3,0,8,6,3,4,6,5,6,7,4,8,1,3,9,1,9,1,2,3,1,6,2,8,2,4,5,8,6,
1,7,8,6,6,4,5,8,3,5,9,1,2,4,5,6,6,5,2,9,4,7,6,5,4,5,6,8,2,8,4,8,9,1,2,8,8,3,1,4,2,6,0,7,6,9,0,0,4,2,
2,4,2,1,9,0,2,2,6,7,1,0,5,5,6,2,6,3,2,1,1,1,1,1,0,9,3,7,0,5,4,4,2,1,7,5,0,6,9,4,1,6,5,8,9,6,0,4,0,8,
0,7,1,9,8,4,0,3,8,5,0,9,6,2,4,5,5,4,4,4,3,6,2,9,8,1,2,3,0,9,8,7,8,7,9,9,2,7,2,4,4,2,8,4,9,0,9,1,8,8,
8,4,5,8,0,1,5,6,1,6,6,0,9,7,9,1,9,1,3,3,8,7,5,4,9,9,2,0,0,5,2,4,0,6,3,6,8,9,9,1,2,5,6,0,7,1,7,6,0,6,
0,5,8,8,6,1,1,6,4,6,7,1,0,9,4,0,5,0,7,7,5,4,1,0,0,2,2,5,6,9,8,3,1,5,5,2,0,0,0,5,5,9,3,5,7,2,9,7,2,5,
7,1,6,3,6,2,6,9,5,6,1,8,8,2,6,7,0,4,2,8,2,5,2,4,8,3,6,0,0,8,2,3,2,5,7,5,3,0,4,2,0,7,5,2,9,6,3,4,5,0
};

printf("Kac Ardisik Sayi Carpimi Yapilsin ? = ");  int sayi=0; scanf("%d",&sayi);

int deger[1000]={};
int k=0; // for'un ka� kere d�nd���n� hesaplamak i�in k de�i�keni tan�mlad�m.

 for(int i=0;i<1000;i=i+sayi){   // kullan�c�n�n girdi�i de�ere g�re ard���k �arp�m yap�s� se�ilir ve deger olarak tan�mlanan diziye s�ras�yla de�erler atan�r.
	switch (sayi)
    {
      case 2:
      	   deger[k]=buffer[i]*buffer[i+1];
      	   k++;  
      	        	     	   
      break;
      
      case 3:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2];
      	   k++;
      break;
      
      case 4:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3];
      	   k++;
      break;
      
      case 5:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4];
      	   k++;
      break;
      
      case 6:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5];
      	   k++;
      break;
      
      case 7:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6];
      	   k++;
      break;
      
      case 8:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7];
      	   k++;
      break;
      
      case 9:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7]*buffer[i+8];
      	   k++;
      break;
      
      case 10:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7]*buffer[i+8]*buffer[i+9];
      	   k++;
      break;
	  
      case 11:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7]*buffer[i+8]*buffer[i+9]*buffer[i+10];
      	   k++;
      break; 	        
      
      case 12:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7]*buffer[i+8]*buffer[i+9]*buffer[i+10]*buffer[i+11];
      	   k++;
      break;  
      
      case 13:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7]*buffer[i+8]*buffer[i+9]*buffer[i+10]*buffer[i+11]*buffer[i+12];
      	   k++;
      break;  
      
      case 14:
      	   deger[k]=buffer[i]*buffer[i+1]*buffer[i+2]*buffer[i+3]*buffer[i+4]*buffer[i+5]*buffer[i+6]*buffer[i+7]*buffer[i+8]*buffer[i+9]*buffer[i+10]*buffer[i+11]*buffer[i+12]*buffer[i+13];
      	   k++;
      break;     
        
	}
	      
  }
  
  fun(deger,k,sayi);// de�erler kullan�lmak uzere fonksiyone g�nderilir
}

