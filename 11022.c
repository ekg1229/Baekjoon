#include <stdio.h>
int main(){
    int t, a, b, result;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &a, &b);
        result = a + b;
        printf("Case #%d: %d + %d = %d\n", i, a, b, result);
    }
    return 0;
}