#include <stdio.h>

int func(int count) {
	for(int i=0;i<count;i++) {
		printf(i);
	}
}
	
int main() {
	long a = 42;
	func(a);
	return 0;
}
