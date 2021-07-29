/*
file name : 1712.c
author : ekg1229
created : 2021/07/29
*/

#include <stdio.h>
int main(){
    int a, b, c, sum, n = 0;
    scanf("%d %d %d", &a, &b, &c);
    while(n != 2147483647){
        sum = a + b*n;
        if (n*c > sum){
            printf("%d", n);
            break;
        }
        n++;
    }
    if (n == 2147483647) printf("%d", -1);
    
    return 0;
}