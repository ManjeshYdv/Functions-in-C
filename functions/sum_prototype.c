#include<stdio.h>
void addNumber(){
	int a,b,c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
}

int main()
{
	addNumber();
	return 0;
}
