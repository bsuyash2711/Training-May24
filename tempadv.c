

#include <stdio.h>

int main()
{
    float temp;
    printf("enter temperature:");
    scanf("%f",&temp);
    if(temp>30){
        printf("It's hot outside,stay hydrated");
    }
    else if(temp>=20 && temp<=30){
        printf("The weather is nice and warm");
    }
    else if(temp<=19 && temp>=10){
        printf("It's a bit chilly,wear a jacket");
    }
    else{
        printf("It's cold outside, stay warm");
    }
    printf("\n\n");
    return 0;
}

