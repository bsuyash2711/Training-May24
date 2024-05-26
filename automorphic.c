// c program to check whether given number is automorphic or not 
#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp;
    temp=n;
    int square;
    int count;
    square=n*n; // calculate the square of number
    
    // determine number of digits in original number
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    // Extract last digits of square
    int remsqr;
    int temp2=pow(10,count);
    remsqr=square % temp2;
    
    // compare digits with original number 
    if(remsqr==n){
        printf("given number is automorphic");
    }
    else{
        printf("given number is not automorphic");
    }
    

    return 0;
}

