#include <stdio.h>
int main(){
    int arr[10][4];
    for(int i = 0; i < 10; i++){
        printf("%d번째 학생의 4과목 점수를 입력하시오.\n", i + 1);
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    float sum[4] = {0.0, };
    for(int j = 0; j < 4; j++){
        int temp = 0;
        for(int i = 0; i < 10; i++){
            temp += arr[i][j];
        }
        sum[j] = (float)temp/10;
    }
    printf("각 과목 별 평균: %f, %f, %f, %f", *sum, *(sum+1), *(sum+2), *(sum+3));
}