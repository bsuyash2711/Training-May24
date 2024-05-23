

#include <stdio.h>
 

int main()
{
    float weight;
    float height;
    float BMI;
    printf("enter weight in Kg:");
    scanf("%f",&weight);
    printf("enter height in meters:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("BMI: %f \n",BMI);
    if(BMI<18.5){
        printf("underweight");
    }
    else if(BMI>=18.5 && BMI<=24.9){
        printf("Normal Weight");
        
    }
    else if(BMI>=25 && BMI<=29.9){
        printf("Overweight");
    }
    else
    {
        printf("Obesity");
    }
	printf("\n\n");
    return 0;
}

