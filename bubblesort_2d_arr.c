#include <stdio.h>

void gswap(void* a, void* b, size_t size) 
{
    char temp;
    char* pa = (char*)a;
    char* pb = (char*)b;
    for (size_t i = 0; i < size; ++i) {
        temp = pa[i];
        pa[i] = pb[i];
        pb[i] = temp;
    }
}

int main(void)
{

    int arr[5][4] = 
    {
        {12,120,56,38},
        {1900,15,1300,2025},
        {860,250,999,3},
        {5,7,9,11},
        {44,55,66,77}
    };
    int size = 5*4;
    int *p = &arr[0][0];
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(p + j) > *(p + j + 1)) {
                gswap(p + j, p + j + 1, sizeof(int));
            }
        }
    }

    while(size--)
    {
        printf("%d - ",*p++);
    }

    

    return 0;
}