// no return type with agrument
#include<stdio.h>
void Subtract(int,int);
void main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	Subtract(a,b);
	
}
void Subtract(int n,int m)
{
	int s;
	s=n-m;
	printf("%d",s);
}
