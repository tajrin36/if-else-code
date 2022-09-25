//Write a C program to find all roots of a quadratic equation using if else.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,x1,x2,r,i;
    printf("ax^2 + bx + c=0\n");
    printf("a,b,c=");
    scanf("%f%f%f",&a,&b,&c);

    discriminant= pow(b,2)-(4*a*c);
    printf("discriminant= %f\n",discriminant);

    if (discriminant>0)
    {
        x1= (-b+sqrt(discriminant))/(2*a);
        x2= (-b-sqrt(discriminant))/(2*a);

        printf("x1=%.2f\n",x1);
        printf("x2=%.2f\n",x2);

    }
    else if (discriminant==0)
    {
        x1= -b/(2*a);
        x2= -b/(2*a);

        printf("x1=%.2f\n",x1);
        printf("x2=%.2f\n",x2);
    }
    else if (discriminant<0)
    {
        r= -b/(2*a);
        i= (sqrt(-discriminant))/(2*a);

        printf("x1= %.2f+i%.2f\n",r,i);
        printf("x2= %.2f-i%.2f\n",r,i);

    }
    return 0;
}
