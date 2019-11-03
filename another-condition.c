#include <stdio.h>

int lt(int x, int y) {
    int z = x + y;
	if(z) { 
		printf("condition met");
		return 1;
	} 
}

int main() {
	int a = 42;
	int b = 73;
	lt(a,b);
return 0;
}
