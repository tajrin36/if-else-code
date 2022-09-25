//Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a alphabet=");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {
        printf("this is a uppercase alphabet");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("this is a lowercase alphabet");
    }
    else
    {
      printf("this is not an alphabet");
    }



    return 0;
}
