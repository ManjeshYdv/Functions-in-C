// return type with no argument
#include<stdio.h>
int sum();
int main()
{
	int c;
	c=sum();
	printf("sum=%d",c);
	return 0;
}
int sum()
{
	int c,a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
