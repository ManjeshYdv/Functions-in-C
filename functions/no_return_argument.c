#include<stdio.h>
void sum(int, int);
void main()
{
	int  a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	sum(a,b);
	
}
void  sum(int a,int b)
{
	int c;
	c=a+b;
	printf("sum of two no.=%d",c);
	
		
}
