long long sum(int *a, int n){
    long long result;
    for(int i = 0; i < n; i++){
        result += *(a + i);        
    }
    return result;
}