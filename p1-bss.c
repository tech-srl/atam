#include <stdio.h>
int x=0;
int y=0;
int p1() {
  printf("x=%d,y=%d\n",x,y);
  return 0;
}
int main() {
 x = 2020;
 y = 2021;
 p1();
 p2();
 printf("x=%f,y=%d\n",(double)x,y);
 p1();
}
