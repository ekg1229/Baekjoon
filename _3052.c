/*
file name : 3052.c
author : ekg1229
created : 2021/03/21
*/

#include <stdio.h>
int main(){
    int cnt = 0;
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", (arr + i));
        arr[i] %= 42;
    }

    //배열에 서로 다른 값이 몇 개 있는지 출력.
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[i] != arr_1[j]) cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}