/*
file name : 1152.c
author : ekg1229
created : 2021/07/02
*/

#include <stdio.h>
int main(){
    int cnt = 0, i = 0;
    char *s1;
    scanf("%s", s1);
    while(1){
        if(s1[i] == '\0'){
            printf("break\n");
            break;
        }
        else if(s1[i] == " ") {
            printf("cnt++\n");
            cnt++;
        }
        i++;
    }
    printf("%d", cnt + 1);
    return 0;
}