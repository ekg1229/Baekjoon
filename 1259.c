/*
file name : 1259.c
author : ekg1229
created : 2021/07/01
*/

#include <stdio.h>
int main(){
    int n;
    while (1){
        scanf("%d", &n);
        if(n == 0) break;

        if(n / 10000 != 0){ //5글자
            if((n / 10000 == n % 10) && ((n - (10000 * ( n / 10000))) / 1000 == (n % 100) / 10)) printf("yes\n");
            else printf("no\n");
        }
        else if(n / 1000 != 0){ //4글자
            if(n / 1000 == ((n % 100) % 10) && (((n % 1000) / 100) == ((n % 100) / 10))) printf("yes\n");
            else printf("no\n");
        }
        else if(n / 100 != 0){ //3글자
            if(n / 100 == (n % 10)) printf("yes\n");
            else printf("no\n");
        }
        else if(n / 10 != 0){ //2글자
            if(n / 10 == n % 10) printf("yes\n");
            else printf("no\n");
        }
        else printf("yes\n");
    }
    return 0;
}