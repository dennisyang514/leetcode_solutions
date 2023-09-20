bool canConstruct(char * ransomNote, char * magazine){
    int lenMag = strlen(magazine), lenransomNote = strlen(ransomNote);
    int arr[127] = {0};

    for(int i=0; i<lenMag; i++){
        arr[magazine[i]]++;
    }

    for(int i=0; i<lenransomNote; i++){
        arr[ransomNote[i]]--;
        if(arr[ransomNote[i]]<0) return 0;
    }
    return 1;
}