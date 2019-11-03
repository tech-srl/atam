#include <stdio.h>

int func(int count) {
	int i =0;
	do {
		printf(i);
		i++;
	} while (i<count);
}
	
int main() {
	long a = 42;
	func(a);
	return 0;
}
