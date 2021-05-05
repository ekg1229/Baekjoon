/*
file name : 10817.c
author : ekg1229
created : 2021/05/05
*/

#include <stdio.h>
int main(){
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c) result = a;
    else if(a==b || b==c) result = b;
    else if(c==a) result = c;
    else if((a>b && a<c) || (a>c && a<b)) result = a;
    else if((b>a && b<c) || (b>c && b<a)) result = b;
    else if((c>a && c<b) || (c>b && c<a)) result = c;
    printf("%d", result);
    return 0;
}