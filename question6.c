
/* This program shows if you elligible for the course or not*/
#include <stdio.h>

int main(void) {
  int math;
  int chem;
  int phy;
  int total3subjects;
  int totalmathphy;

    printf("Enter Mathematics, Physics and Chemistry marks respectively\n");

   scanf ("%i %i %i",&math, &phy, &chem);
   total3subjects = math + chem + phy;
   totalmathphy = math + phy;

  if (math>=65 && phy>=55 && chem>=50 && total3subjects >= 180 && totalmathphy >=140){

    printf("The candidate is eligible for admission");
   
  } else {
     printf("The candidate is not eligible admission");
    }  
return 0;
}
