#include <stdlib.h>
int main() {
  int a = 0;
  int *b = malloc(sizeof(int));
  if ((&a) > b) {
    printf("Trick!\n");
  } else {
    printf("Treat!\n");
  }
  return 0;
}
