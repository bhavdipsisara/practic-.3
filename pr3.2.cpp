#include<stdio.h>

int main()

{
	int n,i;
	printf("enter number =");
	scanf("%d",&n);
	
     do{
     	
     	n/=10;
     	++i;
     	
	 }while(n != 0);
	 
	 printf("enter total count number %d",i);
}