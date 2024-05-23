// Area and circumfereance of circle
#include<stdio.h>
#define PI 3.14
#include<math.h>
 int main()
{
	float radius;
	float area;
	float circum;
	printf("enter the radius:");
	scanf("%f",&radius);
	area=PI*radius*radius;
	circum=2*PI*radius;
	printf("area is :%f",area);
	printf("\ncircumference is :%f",circum);
	printf("\n\n");
	return 0;
}	
