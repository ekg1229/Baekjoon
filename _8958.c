/*
file name : 8958.c
author : ekg1229
created : 2021/07/02
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, score = 0;
    scanf("%d", &n);
    //n만큼 배열의 세로 동적 할당
    char **arr = (int**)malloc(sizeof(char*) * n);
    //n만큼 배열의 가로 동적 할당
    for (int i = 0; i < n; i++){
        arr[i] = (int*)malloc(sizeof(char) * n);
    }
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < ; j++){
            /* code */
        }
        
    }
    return 0;
}