//인터넷 검색해봄. 다시 봐야함.

#include <stdio.h>
int main(){
    int a, b, c;
    int array[10] = {0, };
    scanf("%d\n%d\n%d", &a, &b, &c);
    int n = a*b*c;
    int num;

    while(n>0){
        num = n % 10;
        array[num]++;
        n /= 10;
    }

    for(int j = 0; j < 10; j++){
        printf("%d\n", array[j]);
    }

    return 0;
}