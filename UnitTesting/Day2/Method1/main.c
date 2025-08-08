#include<stdio.h>
#include"demo.h"

int main()
{
    int a=70,b=20,c,d,e,f,g;
    c=sum(a,b);
    d=diff(a,b);
    e=multi(a,b);
    f=div(a,b);
    g=square(a);

    printf("sum = %d\n",c);
    printf("Difference = %d\n",d);
    printf("Multiplication = %d\n",e);
    printf("Division = %d\n",f);
    printf("Square = %d\n",g);

    return 0;
}