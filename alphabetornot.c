#include<stdio.h>

int main(){
   char input;
   printf("Enter any charcter: ");
   scanf("%c",&input);
   /*
   if ((input>='a' && input<='z') || (input>='A' && input<='Z')){
    printf("%c is an alpabet",input);
   }
   else {
    printf("%c is not an alphabet",input);
   }
   */
   ((input>='a' && input<='z') || (input>='A' && input<='Z'))?printf("%c is an alphabet",input):printf("%c is not an alphabet",input);
   return 0;
}