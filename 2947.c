/*
file name : 2947.c
author : ekg1229
created : 2021/07/02
*/

#include <stdio.h>
int main(){
    int arr[5] = {0,};
    int temp;
    for (int i = 0; i < 5; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
                printf("\n");
            }
        }
    }
    return 0;
}