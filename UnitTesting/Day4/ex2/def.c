#include "demo.h"
#include <stdlib.h>

void swap(int *a,int *b)
{
    if(a==NULL || b == NULL) return ;

    int temp =*a;
    *a= *b;
    *b=temp;
}

void rev_arr(int *arr,int size)
{
    if(arr == NULL || size == NULL) return ;

    int *start = arr;
    int *end = arr+size-1;

    while (start<end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}