/*
file name : 2750.c
author : ekg1229
created : 2021/07/13
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, min, temp;
    int *arr = malloc(n * sizeof(int));
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; ++i) {
        min = arr[0];
        for (int j = 0; j < n; j++) {
            if(min < arr[j]) min = arr[j];
        }
        temp = min;
        min = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }   
    free(arr);
    return 0;
}