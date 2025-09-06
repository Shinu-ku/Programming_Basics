#include<stdio.h>
int sum (int* x, int* y);// function declaration
int sum (int* x, int* y)//function defination
{
	int add;
	add = *x + *y;
	return add;
}

int main()
{
	int a,b,result;
	printf("ENTER THE VALUE OF A:");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF B:");
	scanf("%d",&b);
//	printf("\n");
	
	result = sum(&a,&b);//function calling
	printf("result is %d",result);
	return 0;
	
}
