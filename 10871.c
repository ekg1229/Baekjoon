#include <stdio.h>
int main(){
    int a, x, j = 0;
    scanf("%d %d", &a, &x);
    int array[a];
    int array1[a];

    for(int i = 0; i < a; i++){
        scanf("%d ", &array[i]);
        if(x > array[i]){
                array1[j] = array[i];
                j++;
        }
    }
    for(int i = 0; i < j; i++){
        printf("%d ", array1[i]);
    }
    return 0;
}