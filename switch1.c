#include <stdio.h>

void func(int key) {
  switch(key) {
    case 0: 
      printf("the");
      break;
    case 2: 
      printf("brown");
      break;
    case 4: 
      printf("fox");
      break;
    case 6: 
      printf("jumped");
      break;
    default:
      printf(" ");
  }
}
  
int main() {
  for(int i=0;i<7;i++) {
    func(i);
  }
  return 0;
}
