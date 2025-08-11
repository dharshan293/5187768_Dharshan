#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the 'a' value : ");
    scanf("%d",&a);
    printf("Enter the 'b' value : ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("Value after the swap \n a=%d\n b=%d",a,b);

    return 0;

}