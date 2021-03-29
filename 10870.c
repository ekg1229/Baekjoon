/*
file name : 10870.c
author : ekg1229
created : 2021/03/28
*/

#include <stdio.h>
int fibo(int x);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
    return 0;
}

int fibo(int x){
    if(x==0) return 0;
    else if(x==1) return 1;
    else return fibo(x-1) + fibo(x-2);
}