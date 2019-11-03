#include <stdio.h>

int bar(int y) {
	return y + 31;
}

int foo(int x) {
	return bar(x);
}

int main() {
	int val = foo(42);
	printf("value=%d\n",val);
	return 0;
}
