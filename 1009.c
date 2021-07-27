/*
file name : 1009.c
author : ekg1229
created : 2021/07/27
*/

#include <stdio.h>
int main(){
    int n, a, b;
    int arr[4];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &a, &b);
        for (int i = 0; i < 4; ++i){
            arr[i] = ((a % 10) * a) % 10;
        }
        if(b % 4 == 0) printf("%d\n", arr[3]);
        else if(b % 4 == 1) printf("%d\n", arr[0]);
        else if(b % 4 == 2) printf("%d\n", arr[1]);
        else printf("%d\n", arr[2]);
    }
    return 0;
}