//Write a C program to input side of a triangle and check whether triangle is valid or not using if else.
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("enter side of a triangle =");
    scanf("%d%d%d",&a,&b,&c);

    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }

    return 0;
}
