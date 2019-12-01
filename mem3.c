#include <stdlib.h>

int main() { 
  char buf[255];
  void* p = malloc(1024);
  free(&buf[1]);
}
