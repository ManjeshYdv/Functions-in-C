#include<stdio.h>
void addNumber(int a,int b){
	int c;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
	printf("\n");
}

void  main()
{
	addNumber(9,9);
	addNumber(9,8);
}
