//Write a C program to check leap year using if else.
#include<stdio.h>
int main()
{
    int year;
    printf("enter year=");
    scanf("%d",&year);

    if (year%400==0)
    {
        printf("this year is leap year ");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("this year is leap year");
    }
    else
    {
        printf("this is a common year");
    }



    return 0;
}
