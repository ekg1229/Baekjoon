/*
file name : 5543.c
author : ekg1229
created : 2021/07/29
*/

#include <stdio.h>
int main(){
    int sum = 0;
    int arr[3];
    int arr1[2];
    for (int i = 0; i < 3; ++i) scanf("%d", &arr[i]);
    for (int i = 0; i < 2; ++i) scanf("%d", &arr1[i]);
    if (arr1[0] > arr1[1]) arr1[0] = arr1[1];
    if (arr[0] < arr[1] && arr[0] < arr[2]) sum = arr1[0] + arr[0] - 50;
    else if(arr[1] < arr[0] && arr[1] < arr[2]) sum = arr1[0] + arr[1] - 50;
    else sum = arr1[0] + arr[2] - 50;
    printf("%d", sum);
    return 0;
}