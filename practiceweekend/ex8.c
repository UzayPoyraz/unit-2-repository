// This program gets the reverse of a number entered

#include <stdio.h>

int main(void) {
{
  int n, r = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  printf("%d\n", r);

  return 0;
}}
