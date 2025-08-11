#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the number : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    printf("The sum of %d natural numbers = %d",a,sum);

    return 0;
}