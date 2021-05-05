/*
file name : 1271.c
author : ekg1229
created : 2021/05/05
*/

#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n%d", n/m, n%m);
    return 0;
}

/*
변수 n의 범위(10^1000) 때문에 틀림->그냥 python으로 제출
c,c++,자바에서 int형의 범위는 -(2^31)~(2^31-1)
long long의 범위는 -(2^63)~(2^63-1)

a,b=map(int,input().split());
print(a//b);
print(a%b)
*/