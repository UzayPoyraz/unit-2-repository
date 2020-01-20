//THIS PROGRAM CREATES AN UWC ISAK SCHOOL EMAIL WHEN THE INPUTS ARE ENTERED
#include <stdio.h>

int main(void) {
  int year;
  char first[50];
  char last[50];
  printf("Enter your class (year you graduate), Name, Lastname respectively \n");
  scanf("%d", &year);
  scanf("%s", &first);
  scanf("%s", &last);
  printf("%d.%s.%s@uwcisak.jp\n", year, first, last );
  return 0;
}
