#include <stdio.h>
//this program gets cube every number until the entered number
int main(void) {
  int ent = 0, cube = 0; 
  printf("Enter a number\n");
  scanf("%d", &ent);
  ent ++;

  for (int i = 1; i < ent; i++) {
    cube = i*i*i;
printf("The cube of entered number is %d\n", cube);



  }
  return 0;



}
