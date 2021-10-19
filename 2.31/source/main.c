#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x;
	printf("number	square	cube\n");
	for (x = 0; x <= 10; x++)
		printf("%d	%d	%d\n", x, x*x, x*x*x);
}