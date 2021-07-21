/*
file name : 9076.c
author : ekg1229
created : 2021/07/21
*/

#include <stdio.h>
int main(){
    int T, temp, min, cnt = 0;
    int arr[5] = {0, };
    scanf("%d", &T);
    while(1){
        for (int i = 0; i < 5; ++i){
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < 5; ++i) {
            min = arr[i];
            for (int j = 0; j < 5; ++j) {
                if(min > arr[j]){
                    temp = min;
                    min = arr[j];
                    arr[j] = temp;
                }
            }
            temp = min;
            min = arr[i];
            arr[i] = temp;
        }
        if ((arr[1]-arr[3]) >= 4) printf("KIN\n");
        else printf("%d\n", arr[1] + arr[2] + arr[3]);
        cnt++;
        if (cnt == T) break;
    }
    return 0;
}