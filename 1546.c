/*
file name : 1546.c
author : ekg1229
created : 2021/03/21
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float max = 0;
    float sum = 0;
    scanf("%d", &n);
    float* arr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        if(max < arr[i]) max = arr[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] = arr[i]/max*100;
        sum += arr[i];
    }
    printf("%f", sum/n);
    return 0;
}