//Write a C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a,b,c=");
    scanf("%d%d%d",&a,&b,&c);

    if (a==b && b==c)
    {
        printf("equilateral triangle");
    }
    else if (a==b || b==c || c==a)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalene triangle");
    }



    return 0;
}
