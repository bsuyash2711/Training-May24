// Struct program 
#include <stdio.h>
struct Product{
    int product_ID;
    int total_sales_amount;
    
    
};

int main()
{
    
    int n;
    printf("enter the number of product records:");
    scanf("%d",&n);
    struct Product arr[n];
    printf("enter product records (product_id- total_sales_amount:\n");
    for(int i=0;i<n;i++){
        scanf("%d-%d",&arr[i].product_ID,&arr[i].total_sales_amount);
    }
     // sort records according to total_sales_amount
     for(int i=0;i<n-1;i++){
         for(int j=0;j<n-i-1;j++){
             if(arr[j].total_sales_amount<arr[j+1].total_sales_amount){
                 // swap
                 struct Product temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
         
     }
     printf("\n Products records :");
     float max_sales_amount[1000]={0};
     for(int i=0;i<n;i++){
         if(arr[i].total_sales_amount>=max_sales_amount[arr[i].product_ID]){
             printf("Product ID:%d-Total Sales Amount:%d\n",arr[i].product_ID,arr[i].total_sales_amount);
             max_sales_amount[arr[i].product_ID]=arr[i].total_sales_amount;
         }
     }
    
    

    return 0;
}

