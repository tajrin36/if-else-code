//Write a C program to check positive, negative or zero using simple if or if else.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number=");
    scanf("%d",&num);

    if(num>0)
    {
        printf("the number is positive");

    }
    else if (num<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("the number is zero");
    }


    return 0;
}
