#include <stdio.h>


void printarr(int (*p)[4], int size)
{
    for ( int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", (*(p+i))[j]);
        }
        printf("\n");
        
    }    
}

void zigzag(int arr[4][4], int n)
{
    int element = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0 ; j < n ; j++)
            {
                arr[i][j] = element++;
            }

        }
        else
        {
            for(int k = n-1; k >= 0 ; k--)
            {
                arr[i][k] = element++;
            }
        }
    }
    
}

int main(void)
{

    int arr[4][4] = {0};
    zigzag(arr,4);
    printarr(arr,4); 

    return 0;
}
