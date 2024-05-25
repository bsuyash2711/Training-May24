// Program to remove duplicate elements from an array
#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int temp;
    // Taking array input from user
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array elements are :");
    for(i=0;i<n;i++){
    printf("%d \t",arr[i]);
    }
//
printf("\n array elements after :");
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            temp=arr[j];
            arr[j]=arr[n-1];
            arr[n-1]=temp;
            n--;
        }
    }
}
for(i=0;i<n;i++){
    printf("%d \t",arr[i]);
}
printf("\n\n");
    return 0;
}

