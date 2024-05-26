// c program to find leaders in an array
#include <stdio.h>

int main()
{
    
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n array elements are:");
    for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n leaders are :");
    int temp=arr[n-1];
    
    for(i=n-1;i>=0;i--){
        if(arr[i]>=temp){
            temp=arr[i];
            printf("%d\t",arr[i]);
            
        }
    }
    printf("\n\n");
    return 0;
}

