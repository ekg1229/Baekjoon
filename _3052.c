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
    }

    for(int i = 0; i < 10; i++){
        arr[i] %= 42;
    }

    //배열에 서로 다른 값이 몇 개 있는지 출력.
    if (arr[0] == arr[1] ==arr[2] ==arr[3]==arr[4]==arr[5]==arr[6]==arr[7]==arr[8]==arr[9]) cnt = 0;
    else if(arr[0] != arr[1] !=arr[2] != arr[3] != arr[4] != arr[5] != arr[6] != arr[7] != arr[8] != arr[9]) cnt = 9;
    else{
        for (int i = 1; i < 10; i++){
        if (arr[0] != arr[i]) cnt++;
        }
        for (int j = 1; j < 8; j++){
            for (int i = j+1; i < 10; i++) if (arr[j] == arr[i]) cnt--;
        }
    }
    printf("%d", cnt + 1);
    return 0;
}