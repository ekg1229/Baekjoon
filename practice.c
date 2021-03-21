#include <stdio.h>
#include <stdlib.h>

int main(){
    //입력받은 학생 수만큼 입력 받은 과목 수의 성적을 받아 반 평균을 구하는 프로그램.
    int stn, sbn; //student_num(학생 수), subject_num(과목 수)
    printf("학생 수와 과목 수를 입력하세요: ");
    scanf("%d %d", &stn, &sbn);

    int **arr = malloc(sizeof(int*) * stn);
    
    for(int i = 0; i < stn; i++){
        arr[i] = (int*)malloc(sizeof(int) * sbn);
    }
    
    for(int i = 0; i < stn; i++){
        printf("%d번째 학생의 %d가지 점수를 입력하시오.\n", i + 1, sbn);
        for(int j = 0; j < sbn; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    float *sum = malloc(sizeof(int) * sbn);
    memset(sum, 0.0, sizeof(int) * sbn);//동적할당 모두 0으로 초기화

    for(int j = 0; j < sbn; j++){
        int temp = 0;
        for(int i = 0; i < stn; i++){
            temp += arr[i][j];
        }
        sum[j] = (float)temp/stn;
    }
    printf("각 과목 별 평균은 ");

    for(int i = 0; i < sbn; i++){
        printf("%f ", sum[i]);
    }
    printf("입니다.");
    return 0;
}