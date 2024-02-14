#include<stdio.h>
int main(){
    char input;
    printf("Enter any character: ");
    scanf("%c",&input);
    switch (input){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("%c is a vowel",input);
        break;
        default:
        printf("%c is a consonant",input);
        break;
    }
    return 0;
}