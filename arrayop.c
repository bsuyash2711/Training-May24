// c program to take array as inpt from user,perform sorting operation on it
// and also perform searching operation
#include <stdio.h>

int main()
{
    int n,temp,i,j;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[100];
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\narray elements are:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    // sorting using bubble sorting technique
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\narray after sorting:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    // searching using linear search
    int search;
    printf("\n enter search element:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(arr[i]==search){
            printf("%d is found at position%d",search,i+1);
            break;
        }
    }
    if(i==n){
        printf("%d is not present in array",search);
    }
    
    // find maximum element
    printf("\n maximum element is %d",arr[n-1]);
    
    
    
    
    
    
    
    
    return 0;
}

