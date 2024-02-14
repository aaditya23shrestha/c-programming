/*Wap in c to check whether a charcter is uppercase or lowercase alphabet */

#include<stdio.h>
int main(){
char ch;
printf("enter a charcter: " );
scanf("%c",&ch);
if (ch>='A'&& ch<='Z'){
             printf("%c is uppercase",ch);                
       }
            else{
                 printf("%c is lowercase",ch);
      }
       getch();
       return 0;
       }
