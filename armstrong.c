// Program to check whether give number is Armstrong or not 
#include <stdio.h>
#include<math.h>

int main()
{
    //take number as input
    int num,temp,rem;
    int count=0;
    int sum=0;    
    printf("enter a number:");
    scanf("%d",&num);
    // calculate the length
    temp=num;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    
    // check for armstrong number;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    }
    if(sum==num){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }

    return 0;
}

