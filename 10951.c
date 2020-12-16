#include <stdio.h>
#pragma warning(disable:4996)

void main(void){
    int a, b, c, result;
    int array[10];
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        scanf("%d %d", &b, &c);
        result = b + c;
        array[i] = result;
    }

    for(int i = 0; i < a; i++){
        printf("%d\n", array[i]);
    }
}