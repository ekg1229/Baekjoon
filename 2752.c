/*
file name : 2752.c
author : ekg1229
created : 2021/07/30
*/

#include <stdio.h>
int main(){
    int arr[3];
    int temp;
    scanf("%d", &arr[0]);
    scanf("%d", &arr[1]);
    if(arr[0]>arr[1]){
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    scanf("%d", &arr[2]);
    if (arr[1]>arr[2]){
        temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
    }
    if(arr[0]>arr[1]){
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    for (int i = 0; i < 3; ++i) printf("%d ", arr[i]);
    return 0;
}