/*
file name : 10162.c
author : ekg1229
created : 2021/07/29
*/

#include <stdio.h>
int main(){
    int n;
    int arr[3] = {0, };
    scanf("%d", &n);
    arr[0] = n /300;
    n %= 300;
    arr[1] = n / 60;
    n %= 60;
    arr[2] = n / 10;
    n %= 10;
    if (n == 0) for (int i = 0; i < 3; i++) printf("%d ", arr[i]);
    else printf("%d", -1);
    return 0;
}