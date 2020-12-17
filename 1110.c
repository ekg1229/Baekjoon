#include <stdio.h>
int main(){
    int a, result, ten, one, cnt = 0;
    scanf("%d", &a);
    
    ten = a / 10;
    one = a % 10;
    result = one * 10 + ((ten + one) % 10);
    cnt++;

    while(a != result){
        ten = result / 10;
        one = result % 10;
        result = one * 10 + ((ten + one) % 10);
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}