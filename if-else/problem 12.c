//Write a C program to enter month number between(1-12) and print number of days in month using if else.
#include<stdio.h>
int main()
{
    int num;
    printf("enter month number=");
    scanf("%d",&num);

    if (num==1)
    {
        printf("january, 31 days");
    }
    else if (num==2)
    {
        printf("february, 28\29 days");
    }
    else if (num==3)
    {
        printf("march, 31 days");
    }
    else if (num==4)
    {
        printf("april, 30 days");
    }
    else if (num==5)
    {
        printf("may, 31 days");
    }
    else if (num==6)
    {
        printf("june, 30 days");
    }
    else if (num==7)
    {
        printf("july, 31 days");
    }
    else if (num==8)
    {
        printf("august, 31 days");
    }
   else if (num==9)
    {
        printf("september, 30 days");
    }
    else if (num==10)
    {
        printf("october, 31 days");
    }
    else if (num==11)
    {
        printf("november, 30 days");
    }
    else if (num==12)
    {
        printf("december, 31 days");
    }
    else
    {
        printf("invalid month");
    }



    return 0;
}
