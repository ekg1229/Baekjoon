/*
file name : 1920.c
author : ekg1229
created : 2021/03/22
- malloc 대신 int arr[100000] 사용
- 자연수 개수가 10만개 (n)가 최대고, 그 안에서 또 10만개 (m)의 수를 찾는 연산을 수행
- 약 1억번 = 1초// 검색을 O(logN)에 할 수 있는 방법.
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, m;
    scanf("%d", &n);
    int* arr = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int* arr_1 = malloc(sizeof(int) * m);
    int* arr_2 = malloc(sizeof(int) * m);
    for(int i = 0; i < m; i++){
        scanf("%d", &arr_1[i]);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr_1[i] == arr[j]){
                arr_2[i] = 1;
                break;
            }
            else arr_2[i] = 0;
        }
    }
    for(int i = 0; i < m; i++){
        printf("%d\n", arr_2[i]);
    }
    free(arr);
    free(arr_1);
    return 0;
}