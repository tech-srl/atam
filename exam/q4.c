#include <stdlib.h>

int main() {
	int foo[10];
	int *p = (int *) malloc(4*sizeof(int));
	p = p - 1;
	*p = foo[0];
	// -- uncomment me to see what happens -- 
	// free(p);
}
