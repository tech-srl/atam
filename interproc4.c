#include<stdio.h>

int x = 42; 

int f() { 
  return x; 
} 
int g() { 
  int x = 1; 
  return f(); 
}
int main() { 
  int x = g(); 
  printf("value is %d", x);
} 
