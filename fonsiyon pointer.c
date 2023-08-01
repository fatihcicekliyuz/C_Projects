#include<stdio.h>
#define x 40
int top;
int  maasi[x];
struct isyeri{      //struct tanýmlamamsý 
	char Adi[40];
	char Pozisyonu[40];
	int  maasi[x];
};

void  push(struct isyeri *isci){   //fonsiyon pointer
	
	if(top +1 ==x)
	{
		printf("stack dolu\n");
	}
	else
	{
		top=top+1;
		printf("Adinizi ve soyadinizi giriniz : ");  scanf("%s",&isci->Adi);
		printf("\nPozisyonunuzu giriniz : ");        scanf("%s",&isci->Pozisyonu);
		printf("\nMaasinizi giriniz :");             scanf("%d",&isci->maasi[top]);
		
	}

	
}

void yazdir(struct isyeri *isci){    // deðerlerin yazdýrýlmasý iþlemi
	
	for(int i=0;i<=top;i++){
		printf("\n\n %s'in pozisyonu : %s ve maasi :%d'",isci->Adi,isci->Pozisyonu,isci->maasi[i]);
	}
	
	
}


int main(){
	top=-1;
	int sec;	
	struct isyeri isci;
	
	while(1==1)    // döngü ve seçim kýsmý
	{
		  printf("\nPush peek  seciminiz nedir ? \n");
          scanf("%d",&sec);
          switch(sec){
          	case 1:
          		push(&isci);
          		break;
          	case 2:
          		yazdir(&isci);
          		break;
			  	
		  }
	}
	
	
	
	
	
}
