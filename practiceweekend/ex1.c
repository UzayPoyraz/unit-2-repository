#include <stdio.h>
//this program gets the sum of 10 numbers entered
int main(void) {
  int num, sum;
  for(int i=0; i<10; i++){
    printf("Enter 10 numbers\n");
    scanf("%d", &num);
    sum += num;
printf("The sum of 10 numbers is %d", sum);
return 0;


  }



}
