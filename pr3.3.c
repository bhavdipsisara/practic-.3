#include<stdio.h>

main()
{
	int n,a,b,sum;
	
	printf("enter the number to find sum of a and b =");
	scanf("%d",&n);
	
	b = n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	a=n;
	
	sum = a+b;
	printf("sum of a and b =%d",sum);
	
}