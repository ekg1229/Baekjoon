/*
file name : 2775.c
author : ekg1229
created : 2021/07/12
*/

#include <stdio.h>
int main(){
    int T, k, n;
    int arr[14][14] = {0, };
    for (int i = 0; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            if (i == 0) arr[i][j] = j;
            else if(j == 1) arr[i][j] = 1;
            else arr[i][j] = arr[i][j-1] + arr[i-1][j];
        }
    }
    
    
    for (int i = 0; i < 15; i++) {
        for (int j = 1; j < 15; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    scanf("%d", &T);
    for (int t = 0; t < T; ++t){
        scanf("%d", &k);
        scanf("%d", &n);
        printf("%d\n", arr[k][n]);
    }
    return 0;
}