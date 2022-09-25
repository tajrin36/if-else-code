//Write a C program to find maximum between two numbers using if else.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("num1,num2=");
    scanf("%d%d",&num1,&num2);

    if (num1>num2)
    {
        printf("maximum=%d",num1);

    }
    else
    {
        printf("maximum=%d",num2);
    }



    return 0;
}
