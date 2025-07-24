#include <stdio.h>

int main(void) {
    int arr[3][5] = {
        {1,2,3,4,5},
        {35,23,44,32,11},
        {22,45,78,39,50}
    };

    int n = 3, m = 5;
    int sum_rows = 0, sum_cols = 0, sum;


    for (int j = 0; j < m; j++) {
        sum_rows += arr[0][j];
        sum_rows += arr[n-1][j];
    }


    for (int i = 1; i < n-1; i++) {
        sum_cols += arr[i][0];
        sum_cols += arr[i][m-1];
    }

    sum = sum_rows + sum_cols;   
    printf("toplam: %d\n", sum); 
    return 0;
}
