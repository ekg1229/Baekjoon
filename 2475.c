/*
file name : 2475.c
author : ekg1229
created : 2021/05/05
*/

#include <stdio.h>
int main(){
    int n1, n2, n3, n4, n5, result;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    result = (n1*n1+n2*n2+n3*n3+n4*n4+n5*n5)%10;
    printf("%d", result);
    return 0;
}