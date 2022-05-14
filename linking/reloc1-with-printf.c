// from https://www.technovelty.org/linux/plt-and-got-the-key-to-code-sharing-and-dynamic-libraries.html
#include<stdio.h>
extern int foo;

int main() {
	printf("foo");
    return foo;
}

