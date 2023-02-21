#include<stdio.h>
int sum(int a,int b);
int main()
{
	int  c,a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=sum(a,b);
	printf("sum of two no.=%d",c);
	return 0;
	
}
 int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
