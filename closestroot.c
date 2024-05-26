//C program to print closest integer having a whole number square root 

#include <stdio.h>
#include<math.h>


int main()
{
    long n;
    printf("enter a number:");
    scanf("%ld",&n);
    long sqr;
    sqr=sqrt(n);   // calculate square root of a number
    
    long a=sqr+1;
    long b=sqr*sqr;
    long c=a*a;
    long d=n-b;
    long e=c-n;
    if(d<=e){
        printf("closest integer having a whole number square root is %ld",b);
    }
    else{
        printf("closest integer having a whole number square root is %ld",c);
        
    }
    

    return 0;
}

