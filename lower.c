#include <stdio.h>

/* when called, this will  subtract 32 from the variable*/

void lower(char* arr) {
  
  int len = strlen(arr);
  for (int k=0; k<len; k++) {
    printf("%c",arr[k]);
  }
}



