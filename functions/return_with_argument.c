//return type with agrument
#include<stdio.h>
int sum(int a,int b);
int main()
{
	int d,a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	d=sum(a,b);
	printf("sum=%d",d);
	return 0;
	
}
int sum(int a,int b)
{
	int d;
	d=a+b;
	return d;
}

