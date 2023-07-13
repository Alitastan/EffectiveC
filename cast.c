#include <stdio.h>

int main(void)
{
	int si = 5;
	short ss = 8;
	long sl = (long)si;
	unsigned short us = (unsigned short)(ss + sl);
	printf("si: %d\n", si);
	printf("ss: %d\n", ss);
	printf("us: si+ss %d\n", us);


	return 0;
}

