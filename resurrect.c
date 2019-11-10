#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) { 
  void* p1 = malloc(1024);
  free(p1);
  void* p2 = malloc(1024);
  if (p1 == p2) {
  	printf("say what now?");
  }
} 
