#include <stdio.h>

void func(int key) {
  switch(key) {
    case 0: 
      printf("the");
      break;
    case 1: 
      printf("brown");
      break;
    case 2: 
      printf("fox");
      break;
    case 3: 
      printf("jumped");
      break;
    case 4: 
      break; 
    default:
      printf(" ");
  }
}
  
int main() {
  for(int i=0;i<4;i++) {
    func(i);
    func(i+1);
  }
  return 0;
}
