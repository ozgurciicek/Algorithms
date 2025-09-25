#include <stdio.h>

//my own selection sort algorithm working with a compatibility

int* get_array_min(int* ar, int size)
{
    int* min = ar;  
    for(int i = 1 ; i < size ; i++)
    {
        if(ar[i] < *min)
        {
            min = ar + i; 
        }
    }
    return min; 
}

void swap(int* p1, int* p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int* selection_sort(int *p, int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        swap(p + i,get_array_min(p+i,size-i));
        
    }

    return p;
}

void print_array(int* p, int size)
{
    for(int i  = 0 ; i < size ; i++)
    {
        printf("%d ",*(p+i));
    }
}
int main(void)
{   

    int ar[] = {123,22,34,5,17,22,777,124,1};
    int size = sizeof(ar) / sizeof(ar[0]);

    print_array(selection_sort(ar,size),size);

    return 0;
}