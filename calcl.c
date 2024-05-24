
// Program for calculator
#include<stdlib.h>

#include <stdio.h>

int main()
{
    float a;
    float b;
   while(1){
    printf("enter a:");
    scanf("%f",&a);
    printf("enter b:");
    scanf("%f",&b);
  
    printf("Addition:1 \t Subtraction:2 \t Multiplication:3 \t Division:4 \t Exit:5");
    printf("\n Enter Your response:");
    int num;
    scanf("%d",&num);
    if(num==5){
        exit(0);
    }
        
    
    switch(num){
