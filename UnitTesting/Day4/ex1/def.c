#include"demo.h"
#include<stdlib.h>

float cal_avg(int arr[],int size)
{
    if(size<=0 || arr == NULL)
    return 0.0f;

    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return (float)sum/size;
}