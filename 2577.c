#include <stdio.h>
int main(){

    int a, b, c, k, result;
    int array[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    scanf("%d\n%d\n%d", &a, &b, &c);
    result = a*b*c;

    if ((result / 1000000000) != 0) k = 10;
    else if ((result / 100000000) != 0){
        k = 9;
    }
    else if ((result / 10000000) != 0)){
        
        k = 8;
    }
    else ((result / 1000000) != 0){
        k = 7;
    }

    printf("k는%d이다. 씨벌", k);
    /*
    while(k != 0){
        for(int i = 0; i < k; i++) 
        result2 = result / (pow(10,(k-1)));
        if(result2 == 0) array[0]++;
        else if(result2 == 1) array[1]++;
        else if(result2 == 2) array[2]++;
        else if(result2 == 3) array[3]++;
        else if(result2 == 4) array[4]++;
        else if(result2 == 5) array[5]++;
        else if(result2 == 6) array[6]++;
        else if(result2 == 7) array[7]++;
        else if(result2 == 8) array[8]++;
        else if(result2 == 9) array[9]++;
        k--;
    }
    */

    for(int i = 0; i < 10; i++) printf("%d\n", array[i]);
    return 0;
}