#include <stdio.h>
#include <string.h>
/* this will read from standard input and lowercase */

void lower(char* arr) {
  
  int len = strlen(arr);
  for (int k=0; k<len; k++) {
    printf("%c",arr[k]);
  }
}
