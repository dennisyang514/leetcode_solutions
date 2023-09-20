int climbStairs(int n){
    if (n == 0 || n == 1 || n == 2) return n;
    int tmp1 = 1, tmp2 = 2, now = 0;
    for(int i=3; i <= n; i++){
        now = tmp1 + tmp2;
        tmp1 = tmp2;
        tmp2 = now; 
    }
    return now;
}