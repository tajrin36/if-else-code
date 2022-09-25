//Write a C program to check whether a triangle is valid or not if angles are given using if else.
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter a,b,c=");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    if (sum==180 && a>0 && b>0 && c>0)
    {
        printf("triangle is valid");
    }

    else
    {
        printf("invalid triangle ");
    }

    return 0;
}
