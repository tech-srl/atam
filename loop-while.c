#include <stdio.h>

int func(int count) {
	int i =0;
	while(i<count) {
		printf(i);
		i++;
	}
}
	
int main() {
	long a = 42;
	func(a);
	return 0;
}
