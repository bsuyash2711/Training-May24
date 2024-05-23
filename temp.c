
// program to convert celcius to farenheit
#include<stdio.h>
int main()
{
	float temp;
	float faren;
	printf("enter a temperature:");
	scanf("%f",&temp);
	faren=(temp*9/5)+32;
	printf("temperature in farenheit will be :%f",faren);
	printf("\n\n");
	return 0;
}


