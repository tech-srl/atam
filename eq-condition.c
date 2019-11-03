#include <stdio.h>

int lt(int x, int y) {
	if(x == y) { 
		printf("x ?? y");
		return 1;
	} else {
		printf("x ?? y");
		return 0;
	}
}

int main() {
	int a = 42;
	int b = 73;
	lt(a,b);
return 0;
}
