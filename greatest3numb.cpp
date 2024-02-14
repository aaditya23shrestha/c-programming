#include<stdio.h>
int main(){
     int a,b,c;
     printf("Enter any 3 numbers: ");
     scanf("%d%d%d",&a,&b,&c);
     printf("%d is the greatest number",(a>b)?(a>c)?a:c:(b>c)?b:c);
     return 0;
     }
