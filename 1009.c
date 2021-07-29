/*
file name : 1009.c
author : ekg1229
created : 2021/07/27
*/

#include <stdio.h>
#include <math.h>
int main(){
    int n, a, b;
    int arr[4];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &a, &b);
        for (int j = 0; j < 4; ++j){
            if(b%4 != 0) {
                arr[j] = (int)(pow((double)a, (double)(b%4))) % 10;
                if(arr[j] == 0) arr[j] = 10;
            }
            else {
                arr[j] = (int)(pow((double)a, 4)) % 10;
                if(arr[j] == 0) arr[j] = 10;
            }
        }
        if(b % 4 == 0) printf("%d\n", arr[3]);
        else if(b % 4 == 1) printf("%d\n", arr[0]);
        else if(b % 4 == 2) printf("%d\n", arr[1]);
        else printf("%d\n", arr[2]);
    }
    return 0;
}