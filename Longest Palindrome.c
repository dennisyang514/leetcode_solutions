int longestPalindrome(char * s){
    int odd=0, even=0, arr[127]={0}, oddcnt=0, sum=0;
    int lens = strlen(s);

    for(int i=0; i<lens; i++){
        arr[s[i]]++;
    }

    for(int i=0; i<127; i++){
        if(arr[i]%2 == 0 ){
            even += arr[i];
        }else{
            odd += (arr[i]-1);
            oddcnt = 1;
        }
    }

    if(oddcnt == 1){
        sum = even + odd + 1;
    }else{
        sum = even + odd;
    }
    
    return sum;
}