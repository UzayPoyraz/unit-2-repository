#include <stdio.h>
/* This program checks if the number entered is positive or negative*/
int main(void) {
  int number;
  printf("Enter a number \n");
  scanf("%d",&number);

  if(number>=0){
  printf("The number is positive \n");
  }else {
  printf("The number entered is negative \n");
  }


}
