#include <stdio.h>
int main(){
    int n, x;
    scanf("%d %d", &n, &x);
    int *array = malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]); //scanf는 버퍼라는 존재 때문에 공백 안 넣어도 작동함.
        if(x > array[i]) printf("%d ", array[i]);
    }

    free(array);
    return 0;
}