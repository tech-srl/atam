#include<stdio.h>

int main() {
	long x = 0xCAFEBABEDEADBEEF;
	unsigned char *p = (unsigned char*)(&x);
	for (int i = 0; i < sizeof (x); i++)
	{
		printf("%x ", *p++);
	}
	return 0;
}