#include <stdio.h>

int square(int v) {
  return v*v;
}

int main(void) {
  for(int i = 0; i <= 10; ++i) {
    printf("Square of %d is %d\n", i, square(i)); 
  } 
  
  return 0;
} 