#include<string.h>

void foo (char *x) { 
  char buf[2]; 
  strcpy(buf, x); 
} 
int main (int argc, char *argv[]) { 
  foo(argv[1]); 
} 
