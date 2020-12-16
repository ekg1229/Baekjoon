#include <stdio.h>
int main(){
    int a, b, c, result;
    int array[10];

    scanf("%d\n%d\n%d", &a, &b, &c);
    result = a*b*c;
    for(int i = 0; i < 10; i++){
        array[i] = result;
    }
    printf("%d", array[0]);
    return 0;
}