#include <stdlib.h>

int main() { 
  char* p = malloc(42);
  p[43] = 'f';
}
