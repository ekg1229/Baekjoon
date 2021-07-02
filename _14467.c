/*
file name : 14467.c
author : ekg1229
created : 2021/07/01
*/

int main(){
    int n;
    int cow_num;
    int pos[10];
    scanf("%d", &n);
    scanf("%d %d", &cow_num, &pos[cow_num-1]);
    for (int i = 1; i < n; i++){
        scanf("%d %d", &cow_num, &pos[cow_num-1]);
        //배열 2개 써서 비교 or 또 어떤 방법이 있을까..
    }
    return 0;
}