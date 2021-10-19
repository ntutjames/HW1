#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d, e,f;
	printf("enter total miles\n");
	scanf_s("%d", &a);
	printf("enter cost of gas\n");
	scanf_s("%d", &b);
	printf("enter average miles of gas\n");
	scanf_s("%d", &c);
	printf("parking fees\n");
	scanf_s("%d", &d);
	printf("tolls\n");
	scanf_s("%d", &e);
	f = (a / c)*b + d + e;
	printf("%d dollars\n",f);
}