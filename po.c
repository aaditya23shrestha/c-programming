#include<stdio.h>
int main(){
    int a,b,c;
    printf("ENter any 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        printf("The greatest number is %d",a);
    }
    else if(b>a && b>c) {
        printf("The maximum number is %d",b);
    } 
    else {
        printf("c is big %d",c);
    }
    return 0;
}
