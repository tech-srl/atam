#include <stdio.h>



int gt(int x, int y) {
	return x > y;
}

int gte(int x, int y) {
	return x >= y;
}

int lt(int x, int y) {
	return x < y;
}

int lte(int x, int y) {
	return x <= y;
}

int eq(int x, int y) {
	return x == y;
}

int main() {
	int x = 42;
	int y = 73;

	gt(x,y);
	lt(x,y);
	gte(x,y);
	lte(x,y);
	eq(x,y);

return 0;
}
