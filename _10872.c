/*
file name : 10872.c
author : ekg1229
created : 2021/03/22
*/

#include <stdio.h>
int fact(int x);

int main(){
    int n, result;
    scanf("%d", &n);
    result = fact(n);
    printf("%d", result);
    return 0;
}

int fact(int x){
    int y = 0;
    printf("1\n");
    if(x>0){
        y += fact(x-1) * x;
    }
    return y;
}