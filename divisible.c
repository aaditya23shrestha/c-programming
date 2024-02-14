#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    /*
    if (n%5==0 && n%11==0){
       printf("Given number is divisible by both 5 and 11.");
    }
    else {
       printf("Given number is not divisible by both 5 and 11.");
    }
    */
    (n%5==0 && n%11==0)?printf("Divisible"):printf("Not divisible");
    return 0;

}