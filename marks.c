// program to find grade of students
#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks between 0-100:");
    scanf("%d",&marks);
    if((marks<0 || marks>100)){
        printf("invalid marks");
    }
    else if ((marks<=100 && marks>=90)){
        printf("Grade A");
    }
    else if ((marks<=89 && marks>=80)){
        printf("Grade B");
    }
    else if ((marks<=79 && marks>=70)){
        printf("Grade C");
    }
    else if ((marks<=69 && marks>=60)){
        printf("Grade D");
    }
    else if(marks<60){
        printf("Grade F");
    }
    printf("\n\n");
    

    return 0;
}
 
