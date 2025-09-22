#include<stdio.h>



int subarray(int* p, int size)
{
    int max = p[0];
    for(int i = 0 ; i < size ; i++)
    {
        int sum = p[i];
        if(sum >= max)
        {
                max = sum;
        }
        for(int j = i+ 1; j < size  ; j++) // size= eleman sayısı 
        {
            sum += p[j];
            if(sum >= max)
            {
                max = sum;
            }
        }
    }

    return max;
}
int main()
{


    int arr[] = {-4,2,3,-1,5,6,-3,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n",subarray(arr,size));




    return 0;
}