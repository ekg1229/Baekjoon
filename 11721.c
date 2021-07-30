/*
file name : 11721.c
author : ekg1229
created : 2021/07/30
*/

#include <stdio.h>
int main() {
    int c[100];
    int n = 1;
    while ((c[n] = getchar()) != EOF) {
        if (n%10==0) printf("%c\n", c[n]);
        else printf("%c", c[n]);
        n++;
    }
    return 0;
}