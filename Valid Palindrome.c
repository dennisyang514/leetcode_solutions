bool isPalindrome(char * s){
    char arr1[200000] = {'\0'} ;
    char arr2[200000] = {'\0'} ;
    int i,j=0;

    for(i=0; i<strlen(s); i++){
        if(s[i] >= 48 && s[i] <= 57 || s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122){
            arr1[j] = tolower(s[i]);
            j++;
        }
    }
    
    j-=1;

    for(i=0; i<strlen(arr1); i++){
        arr2[i] = arr1[j];
        j--;
    }

    printf("%s\n",arr1);
    printf("%s\n",arr2);

    for(i=0; i<strlen(arr1); i++){
        if(arr2[i] - arr1[i] != 0){
            return 0;
        }
    }
    return 1;
}