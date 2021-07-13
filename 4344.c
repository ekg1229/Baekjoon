#include <stdio.h>
int main(){
    int n, num;
    double sum, average, result, cnt;
    int array[1000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        cnt = 0, sum = 0;
        scanf("%d", &num);
        for(int j = 0; j < num; j++){
            scanf("%d", &array[j]);
            sum += array[j];
        }
        average = sum / num;
        for(int j = 0; j < num; j++){
            if(array[j]>average) cnt++;
        }
        result = cnt/num*100;
        printf("%.3lf%%\n", result);
    }
    return 0;
}