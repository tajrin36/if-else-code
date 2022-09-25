//Write a C program to check whether an alphabet is vowel or consonant using if else.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);

    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("the character is a vowel");
    }
    else if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("the character is a vowel");
    }
    else
    {
        printf("the character is consonent");
    }



    return 0;
}
