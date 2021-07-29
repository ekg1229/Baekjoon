/*
file name : 10797.c
author : ekg1229
created : 2021/07/29
*/

#include <stdio.h>
int main(){
    int n, cnt = 0;
    int arr[5];
    scanf("%d", &n);
    for (int i = 0; i < 5; ++i){
        scanf("%d", &arr[i]);
        if (arr[i] == n) cnt++;
    }
    printf("%d", cnt);
    return 0;
}