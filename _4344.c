#include <stdio.h>
int main(){
    int n, num, sum = 0, average = 0, cnt = 0, result;
    int array[1000];
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        cnt = 0;
        scanf("%d", &num);
        for(int j = 1; j <= num; j++){
            scanf("%d", &array[j]);
            sum += array[j];
        }
        average = sum / num;
        for(int j = 1; j < num; j++){
            if(array[j]>average) cnt++;
        }
        result = (100/num)*cnt;
        printf("%d", result);
    }
    printf("%d", sum);
    return 0;
}