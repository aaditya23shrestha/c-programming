#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    //if((year%4==0 && year%100 !=0) || (year%400 == 0)){
      //  printf("%d is a leap year.",year);
    //}
    //else {
    //    printf("Not a leap year.");
    //}
    printf(((year%4==0 && year%100 !=0) || (year%400 == 0))?("Given year is leap year"):("Given year is not a leap year"));
    return 0;

}