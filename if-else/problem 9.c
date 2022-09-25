//Write a C program to input a character from user and check whether given character is alphabet, digit or special character using if else.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character=");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("this is a alphabet");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("this is a alphabet");
    }
    else if (ch>='1' && ch<='9')
    {
        printf("this is a digit");
    }
    else
    {
        printf("this is a special character");
    }


    return 0;
}
