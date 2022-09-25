//Write a C program to input week number(1-7) and print the corresponding day of week name using if else.
#include<stdio.h>
int main()
{
    int num;
    printf("enter week number=");
    scanf("%d",&num);

    if (num==1)
    {
        printf("Monday");
    }
    else if (num==2)
    {
        printf("Tuesday");
    }
    else if (num==3)
    {
        printf("Wednesday");
    }
    else if (num==4)
    {
        printf("Thurstday");
    }
    else if (num==5)
    {
        printf("Friday");
    }
    else if (num==6)
    {
        printf("Saturday");
    }
    else if (num==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("fun day");
    }



    return 0;
}
