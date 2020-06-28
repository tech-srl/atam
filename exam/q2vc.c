#include <stdlib.h>
int a = 0;

int main() {
  int *b = malloc(sizeof(int));
  if ((&a) > b) {
    printf("Trick!\n");
  } else {
    printf("Treat!\n");
  }
  return 0;
}
