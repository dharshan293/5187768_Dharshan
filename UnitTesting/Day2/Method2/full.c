#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int diff(int a,int b)
{
    
    return a-b;
}
int multi(int a,int b)
{
    
    return a*b;
}
int div(int a,int b)
{
    
    return a/b;
}
int square(int a)
{
    
    return a*a;
}
int main()
{
    int a=10,b=20,c,d,e,f,g;
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