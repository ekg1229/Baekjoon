/*
file name : 10953.c
author : ekg1229
created : 2021/07/01
*/

#include <stdio.h>
int main(){
    int a, b, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}