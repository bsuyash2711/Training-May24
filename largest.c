//  program to find greatest of three numbers

#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter three numbers :");
	scanf("%d%d%d",&n1,&n2,&n3);
	if((n1>n2) && (n1>n3)){
		printf("greater number is %d",n1);
	}
	else if((n2>n3) && (n2>n1)){
		printf("greater number is %d",n2);
	}
	else{
	printf("greater number is %d",n3);
	}
	printf("\n\n");
return 0;
}

