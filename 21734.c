/*
file name : 21734.c
author : ekg1229
created : 2021/07/22
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int num;
    char arr[10] = {0, };
    scanf("%s", arr);

    int *arr1 = malloc(sizeof(int) * strlen(arr));
    
    for (int i = 0; i < strlen(arr); ++i){
        arr1[i] = arr[i];
    }
    for (int i = 0; i < strlen(arr); ++i){
        if ((arr1[i] / 100) == 0) num = (arr1[i] % 10) + (arr1[i] - (arr1[i] % 10)) / 10;
        else num = (arr1[i] % 10) + (((arr1[i] % 100)- (arr1[i] % 10)) / 10) + ((arr[i]- (arr1[i] % 100)) / 100);
        for (int k = 0; k < num; ++k) printf("%c", arr[i]);
        puts(" ");
    }
    free(arr1);
    return 0;
}

/*
#include <stdio.h>

int main() {
    int c, s;
    while ((c = getchar()) != EOF) {
        s = (c % 10) + (c / 10 % 10) + (c / 100 % 10);
        while (s--) putchar(c);
        putchar(10);
    }
    return 0;
}

getchar(), putchar(), EOF 더 공부하기
*/