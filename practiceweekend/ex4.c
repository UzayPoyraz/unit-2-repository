// This program shows harmonic numbers until 1/n and gets their sum

#include <stdio.h>

int main(void) {
  int num=0;
  int har=0;

  printf("Enter a number\n");
  scanf("%d", &num);

  for (int i=0; i<=num; i++) {
    har=har+1/i;
  }
  printf("Sum of harmonic series up to %d is %d.\n", num, har);

  return 0;
}

//There is a problem. It says floating point exception.
