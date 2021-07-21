/*
file name : 2750.c
author : ekg1229
created : 2021/07/13
modified: 2021/07/20
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, min, temp;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        min = arr[i];
        for (int j = 0; j < n; ++j) {
            if(min > arr[j]){
                temp = min;
                min = arr[j];
                arr[j] = temp;
            }
        }
        temp = min;
        min = arr[i];
        arr[i] = temp;
    }
    for (int i = n-1; i >= 0; --i) {
        printf("%d\n", arr[i]);
    }   
    free(arr);
    return 0;
}