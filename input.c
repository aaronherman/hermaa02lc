#include <stdio.h>
#include "lower.h"

int main(int argc, char* argv[]) {
  char c;
  
  while ((c=getchar()) != EOF) {
    if (!lower(c))
      c = c +  32;
      printf("%c",c);
  }
}
