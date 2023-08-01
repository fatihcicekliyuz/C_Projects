#include <stdio.h>
#define BOYUT 5
int dizi[BOYUT], top;

void push(int veri)
{
	if(top +1 == BOYUT)
	{
		printf("stack dolu \n");
	}
	
	else
	{
		top=top+1;
		dizi[top]=veri;
	}
}

void pop()
{
	if(top ==-1)
	{
	   printf("stack boþ \n");
	}
	
	else
	{
		top = top-1;
	}
}

int peek()
{
	return dizi[top];
}

void yazdir()
{
	int i;
	for(i=0;i<top+1;i++)
	{
		printf(" %d \n ",dizi[i]);
	}
}
int main(){
  top = -1;	
   int sec;
   while(1==1){
   
  printf("Push  pop  peek  seciminiz nedir ? \n");
 
  scanf("%d",&sec);
  
  switch(sec)
  {
  	case 1 :
  		 printf("\nsayi gir ");
  		 scanf("%d",&sec);
  		 push(sec);
  		 yazdir();
  		 break;
  	case 2 :
	     pop();
		 yazdir();
		 break;
	case 3 :
	     printf("\ntop deðeri = %d",peek());
		 break;	 	 
  }
	
}
	
  
  return 0;
}
