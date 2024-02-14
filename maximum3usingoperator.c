#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    //printf((a>b)?(a>c)?a:c(a>b)?a:b);
    printf("Maximum number is: %d\n", a>b?((a>c)?a:c):((b>c)?b:c));
     getch();
     return 0;
}

/*
condition ? True case : False Case
a>b = condition
True case 
     a >c condition
       True case
         a is greatest   
       false case
         c is greatest
false case
      b > c condition
        True case
             b is the greatest
        False case
              c is the greatest
              */

