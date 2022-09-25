//Write a C program to check whether a number is divisible by 5 and 11 or not using if else.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number=");
    scanf("%d",&num);

    if (num%5==0)
    {
        printf("the number is divisible by 5");
    }
    else if (num%11==0)
    {
        printf("the number is divisible by 11");
    }
    else
    {
        printf("the number isn't divisible by 5 and 11");
    }



    return 0;
}
