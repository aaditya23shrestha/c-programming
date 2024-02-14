#include<stdio.h>
int main(){
    int n;
    printf("ENter any number: ");
    scanf("%d",&n);
    // 
    // if (n>0){
        // printf("Given number %d is positive.",n);
    // }
    // else if(n<0){
        // printf("Given number %d is negative.",n);
    // }
    // else {
        // printf("Given number is zero.",n);
    // }
    (n>0)?printf("%d is Positive",n):(n<0)?printf("%d is negative",n):printf("Given numb is zero");
    return 0;
}