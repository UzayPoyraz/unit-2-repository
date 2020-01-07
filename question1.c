#include <stdio.h>
/*this program will check if a number is odd or even*/
int main(void) {
  int number;
  printf("Enter a number \n");
  scanf("%d",&number);

  if(number %2==1){
  printf("The number entered is odd\n");
   }
  else {
  printf("The number entered is even\n");
   }
  
}
