#include <stdio.h>
/* This program checks if you are eligible to vote in Japan*/
int main(void) {
  int number;
  printf("Enter your age \n");
  scanf("%d",&number);

  if(number>=20){
  printf("Congratulations! You are eligible for casting your vote! \n");
  }else {
  printf("Sorry! You cannot vote \n");
  }


}
