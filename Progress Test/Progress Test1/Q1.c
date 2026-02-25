#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a, b;
  printf("\nINPUT:\n");
  scanf("%f", &a);
  scanf("%f", &b);

  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (a == 0) {
   	  printf("Loi: Chia cho so 0");
  } else {
  	float x = cbrt(-b / a);
  	printf("%.3f", x);
  }
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
