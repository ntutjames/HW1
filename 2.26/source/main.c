#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("enter two integers");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
	{
		printf("%d is a multiple of %d", a, b);
	}
	if (a%b != 0)
	{
		printf("%d is not a multiple of %d", a, b);
	}
}