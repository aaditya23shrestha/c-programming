#include<stdio.h>
int main(){
    char input;
    printf("enter any charcter: ");
    scanf("%c",&input);
    if((input>'a'&& input<='z') || (input>='A' && input<='Z')){
    printf("%c is aplabet",input);
    }
    else if (input>='0' && input<='9'){
        printf("%c is a digit",input);
    }
    else {
        printf("%c is a special character",input);
    }
    return 0;
}