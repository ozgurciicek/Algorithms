#include <stdio.h>

int main()
{
    int arr[] = {3400,215,27,1323,450,34}; // Array have 6 value
    int size = 6;
    int temp;
    for(size_t i = 0 ; i < size - 1; i++)
    {
        for(size_t j = 0 ; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size ; i++)
    {
        printf("%d - ",arr[i]);
    }
    return 0;
}