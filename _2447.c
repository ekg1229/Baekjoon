/*
file name : 2447.c
author : ekg1229
created : 2021/03/28
modified: 2021/07/13
*/

#include <stdio.h>
#include <math.h>
void star(int x);

int main(){
    int n;
    scanf("%d", &n);
    star(n);
    return 0;
}

void star(int x){
    if(x > 3) star(x);
    else printf("***\n***\n***");
}