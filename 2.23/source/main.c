#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
		printf("enter three integers");
		scanf_s("%d %d %d", &a, &b, &c);
		if ((a >= b) && (a >= c))
		{
			if(b<=c)
			{
				printf("%d %d\n", a,b);
			}
			else
			{
				printf("%d %d\n", a, c);
			}
			
		}

		if ((b >= a) && (b >= c))
		{
			if (a <= c)
			{
				printf("%d %d\n", b, a);
			}
			else
			{
				printf("%d %d\n", b, c);
			}

		}

		if ((c >= a) && (c >= a))
		{
			if (b <= c)
			{
				printf("%d %d\n", c, b);
			}
			else
			{
				printf("%d %d\n", c, a);
			}

		}
	

}