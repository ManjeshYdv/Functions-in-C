#include<stdio.h>
void sum();
void main()
{
	sum();
}
void sum()
{
	int a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum=%d",c);
}
