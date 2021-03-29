/*
file name : 10872.c
author : ekg1229
created : 2021/03/22
modified: 2021/03/28
*/

#include <stdio.h>
int fact(int x);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
    return 0;
}

int fact(int x){
    if(x==0) return 1;
    else if(x==1) return 1;
    else return fact(x-1) * x;
}