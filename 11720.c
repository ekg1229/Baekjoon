/*
file name : 11720.c
author : ekg1229
created : 2021/03/22
*/

#include <stdio.h>
int main(){
    int n, j = 0, sum = 0;
    char arr[101];
    scanf("%d", &n);
    scanf("%s", arr);
    //printf("arr[] = %s\n", arr);

    while(arr[j] != '\0'){
        //printf("arr[%d] = %c\n", j, arr[j]);
        sum += arr[j] - '0';
        j++;
    }
    printf("%d", sum);
    return 0;
}