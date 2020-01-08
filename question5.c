#include <stdio.h>
/* This program accepts coordinate point in XY and determines in which quadrant the coordinate point lies. */
int main(void) {
  int x;
  int y;
  printf("Enter coordiantes (x,y) \n");
  scanf("%d",&x);
  scanf("%d",&y);
  
  if(x >= 0 && y >= 0){
  printf("The coordinate point (%d, %d) lies in the First quadrant.", x, y );
  }
   if(x >= 0 && y < 0){
  printf("The coordinate point (%d, %d) lies in the Fourth quadrant.", x, y); }
   if(x < 0 && y >= 0){
  printf("The coordinate point (%d, %d) lies in the Second quadrant.", x, y);}
   if(x < 0 && y < 0){
  printf("The coordinate point (%d, %d) lies in the Third quadrant.", x, y);
  }
}
