#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	printf("enter an integer\n");
	scanf_s("%d", &a);
	if (a % 2 == 1)
	{
		printf("odd");
	}
	if (a % 2 ==0)
	{
		printf("even");
	}
}
