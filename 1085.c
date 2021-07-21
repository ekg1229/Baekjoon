/*
file name : 1085.c
author : ekg1229
created : 2021/07/20
*/

#include <stdio.h>
int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int w1 = w-x;
    int h1 = h-y;
    if (w1 < x) x = w1;
    if (h1 < y) y = h1;
    if (x < y) printf("%d", x);    
    else if (x == y) printf("%d", x);    
    else printf("%d", y);    
    return 0;
}