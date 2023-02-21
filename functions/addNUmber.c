// return type , no argument
#include<stdio.h>
int addNumber();
int main()
{	
	int x;
	x=addNumber();
	printf("=%d",x);
	return 0;
}
int addNumber()
{
	int a,b,c;
	printf("entr two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	
	return(c);
}
