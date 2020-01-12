// This program will get the factorail of entered number
#include <stdio.h>

int main(void) {
  int number=0, res=1;
  printf("Enter a number\n");
  scanf("%d", &number);
  for (int i=1; i<=number; i++) {
    res=res*i;
  }
  printf("Factorial of the number entered is %d", res);
  return 0;
}
