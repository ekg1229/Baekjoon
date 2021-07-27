/*
file name : 2331.c
author : ekg1229
created : 2021/07/27
*/

#include <stdio.h>
int def(int n);
int main(){
    int n;
    int num = 1;
    scanf("%d", &n);
    while(num != n){
        if(n == num + def(num)){
            printf("%d", num);
            break;
        }
        num++;
    }
    if(num == n) printf("0");
    return 0;
}
int def(int n){
    if(n == 0) return 0;
    else return n%10 + def((n-n%10)/10);
}