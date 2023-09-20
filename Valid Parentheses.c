int isValid(char *s){
    int length = strlen(s);
    int top = 0;
    char *stack = malloc(length);
    char ch = '\0';

    for(int i=0; i<length; i++){
        if (top == 0){
            if(s[i] == ')' || s[i] == ']'|| s[i] == '}') {
                free(stack);
                return 0 ;
            }
        }

        if(s[i] == '(' || s[i] == '['|| s[i] == '{'){
            stack[top] = s[i];
            top++;
        }else if(top == 0){
            free(stack);
            return 0;
        }else if(
            stack[top-1] == '(' && s[i] == ')' || 
            stack[top-1] == '[' && s[i] == ']' || 
            stack[top-1] == '{' && s[i] == '}'
            )
        {
            top--;
        }else {
            free(stack);
            return 0;
        }
    }

    free(stack);

    if(top == 0){
        return 1;
    }else{
        return 0;
    }
}