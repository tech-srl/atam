#include <stdio.h>
int x = 2020;
int y = 2021;
int p1() {
  printf("x=%d,y=%d\n",x,y);
  return 0;
}
int main() {
 p1();
 p2();
 printf("x=%f,y=%d\n",(double)x,y);
 p1();
}
