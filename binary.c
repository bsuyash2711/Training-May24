// program to convert binary to decimal


#include <stdio.h>
#include<math.h>

int main()
{
    int binary;
    int decimal=0;
    int i=0;
    int r;
    printf("Enter binary number:");
    scanf("%d",&binary);
    while(binary!=0)
    {
        r=binary%10;
        binary=binary/10;
        decimal=decimal+(r*pow(2,i));
        i++;
        
        
    }
    printf("decimal number is %d",decimal);
    printf("\n\n");
    

    return 0;
}


