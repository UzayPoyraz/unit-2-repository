// This program adds n amounts of 1 to 1 and sums all of them until n

#include <stdio.h>

int main(void) {
  int num=0;
  int sum=0;
  int term=1;

  printf("Enter number of terms you want to add\n");
  scanf("%d", &term);

  for (int i=1; i<=term; i++) {
    sum=sum+num;
    num=(num*10)+1;

  }
  printf("The sum is %d.\n", sum);

  return 0;
}
