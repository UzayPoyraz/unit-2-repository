#include <stdio.h>
/* This program picks the greatest of 3 entered numbers*/
int main(void) {
  int number1;
  int number2;
  int number3;
  printf("Enter 3 numbers \n");
  scanf("%d",&number1);
  scanf("%d",&number2);
  scanf("%d",&number3);
      if (number1 > number2)
    {
        if (number1 > number3)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (number2 > number3)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");


}
