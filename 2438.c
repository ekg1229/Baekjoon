#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        for(int j = 1; j <= t; j++){
            if(j <= i) printf("*");
        }
        puts("");
    }
    return 0;
}