
#include <stdio.h>
#include<stdlib.h>
int main()
{
    
    int num;
    printf("enter a positive number:");
    scanf("%d",&num);
    if(num<0){
        printf("Your input is invalid");
        exit(0);
    }
    int sum=0;
    int r;
    int i=0;
    while(num!=0){
        r=num%10;
        num=num/10;
        sum=sum+r;
        i++;
    }
    printf("sum is %d",sum);
    printf("\n\n");
    

    return 0;
}

