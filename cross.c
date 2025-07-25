#include <stdio.h>

int main(void)
{

    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int *p = &arr[0][0];
   

    int n = 3 ,m = 3;
    int rsum = 0;
    int lsum = 0;

    for (int i = 0; i < n; i++) {

        rsum += *(p + i*m +i);  

        lsum += *(p + i * m + (m - 1 - i));
    }

    for(int i = 0; i < 3; i++)
    {

        for(int j = 0 ; j <3 ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    if(lsum == rsum)
    {
        printf("its equal !\n");
    }
    else
    {
        printf("its not equal! \n");
    }

    printf("\nlsum is : %d rsum is : %d",lsum,rsum);



    return 0;
}