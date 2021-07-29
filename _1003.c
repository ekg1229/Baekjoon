/*
file name : 1009.c
author : ekg1229
created : 2021/07/28
*/

#include <stdio.h>
int fibo(int n, int* cnt0, int* cnt1);
int main(){
    int n, k, result;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int cnt0 = 0, cnt1 = 0;
        scanf("%d", &k);
        result = fibo(k, &cnt0, &cnt1);
        printf("%d %d %d\n", result, cnt0, cnt1);
    }
    return 0;
}
int fibo(int n, int* cnt0, int* cnt1){
    if(n == 0){
        *cnt0 += 1;
        return 0;
        }
    else if(n == 1){
        *cnt1 += 1;
        return 1;
        }
    else {
        return fibo((n-1), &cnt0, &cnt1) + fibo((n-2), &cnt0, &cnt1);
        }
}