//Write a C program to find maximum between three numbers using ladder if else or nested.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("num1,num2,num3=");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2 && num1>num3)
    {
        printf("maximum=%d",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("maximum=%d",num2);
    }
    if (num3>num2 && num3>num1)
    {
        printf("maximum=%d",num3);
    }

    return 0;
}
