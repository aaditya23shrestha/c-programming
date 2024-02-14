#include<stdio.h>
int main(){
    int a,b,k;
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    k = (a>b)?a:b;
    printf("The maximum number is %d",k);
    return 0;
}