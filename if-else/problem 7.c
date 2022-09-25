//Write a C program to input a character from user and check whether the given character is alphabet or not using if else.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("this is a letter");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("this is a letter");

    }
    else
    {
        printf("this isn't a letter");
    }



    return 0;
}
