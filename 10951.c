#include <stdio.h>
int main(){
    int b, c;
    while (scanf("%d %d", &b, &c) != EOF){
        printf("%d\n", b + c);
    }
    return 0;
}