// no return type, no argument
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
	printf("sum of %d and %d is %d",a,b,c);
}
