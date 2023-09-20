char * getHint(char * secret, char * guess){
    int bulls = 0,cows = 0;
    char secretCnt[10]={0};
    char guessCnt[10]={0};
    int lens = strlen(secret);

    for(int i=0; i<lens; i++){
        if(secret[i] == guess[i]){
            bulls++;
        }else{
            secretCnt[secret[i] - '0']++;
            guessCnt[guess[i] - '0']++;
        }
    }

    for(int i=0; i<10; i++){
        cows += (secretCnt[i] < guessCnt[i] ? secretCnt[i] : guessCnt[i]);
    }

    char *output = (char*)malloc(10 * sizeof(char));

    sprintf(output,"%dA%dB",bulls,cows);

    return output;
}