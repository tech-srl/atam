#include <stdio.h>

int calc(int p) {
	return 4+p*12; 
}

int main() {
	int a = calc(42); 
	printf("hello calc %d\n",a);
}

