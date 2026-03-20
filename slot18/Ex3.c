#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
struct Book {
    int id;
    char name[50];
}Book;
int main() {
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n, id;
  struct Book a[100];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
      scanf("%d %s", &a[i].id, a[i].name);
  }
  scanf("%d", &id);
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int index = -1;
  for(int i = 0; i < n; i++){
      if(a[i].id == id){
          index = i;
          break;
      }
  }
  if(index == -1)
      printf("Not found");
  else
      printf("%d", index);
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}