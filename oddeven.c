#include<stdio.h>
int main(){
    int n;
    printf("ENtr a num");
    scanf("%d",&n);
    printf((n%2==0)?("Given number is even"):("Given numb is odd"));
    return 0;
}