/*
file name : 2851.c
author : ekg1229
created : 2021/07/23
*/

#include <stdio.h>
int main(){
    int arr[10];
    int sum1 = 0, sum2 =0, k = 0;
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);
    while(1){
        sum2 = sum1;
        sum1 += arr[k];
        if (sum1 > 100) {
            if ((sum1 - 100) == (100 - sum2)){
                printf("%d", sum1);
                break;
            }
            else if((sum1 - 100) > (100 - sum2)){
                printf("%d", sum2);
                break;
            }
            else{
                printf("%d", sum1);
                break;
            }
        }
        ++k;
    }    
    return 0;
}