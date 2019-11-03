#include <stdio.h>

int lt(long x, long y) {
    long z = x - y;
	if(z) { 
		printf("condition met");
		return 1;
	} 
}

int main() {
	long a = 42;
	long b = 73;
	lt(a,b);
return 0;
}
