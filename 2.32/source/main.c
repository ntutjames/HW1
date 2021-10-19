#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a, b,c;
	printf("height(m) and weight(kg)\n");
	scanf_s("%f %f", &a, &b, &c);
	c = b / (a*a);
	printf("BMI value:%f\nUnder weight:less than 18.5\nNormal:18.5~24.9\nOverwight:25~29.9\nObese:30 or greater\n",c);
	if (c < 18.5)
	{
		printf("Under weight\n");
	}
	if ((c >=18.5)&&(c<25))
	{
		printf("Normal\n");
		
	}
		if ((c >=25) && (c < 30))
		{
			printf("Over weight\n");
		}
		if ((c > 30))
		{
			printf("Obese\n");
		}
	}
	
