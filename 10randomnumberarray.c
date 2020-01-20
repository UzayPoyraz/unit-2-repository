#include <stdio.h>
#include <stdlib.h>
// This program gives an array of 10 numbers//
int main(void) {
int mark[10];
  for (int x=0; x<=9; x++ ){
    mark[x] = rand()%10;
    printf("element %d: %d \n", x, mark[x]); }
  return 0;
}
