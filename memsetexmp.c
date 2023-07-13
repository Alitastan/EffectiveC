
#include <stdlib.h>
#include <stdio.h>

void* memset(void* dest, int val, size_t n);
#define LEN 5U

int main(void)
{
	
	char buff[LEN];
	
	memset(buff, 2, sizeof(buff));

	for (unsigned int i = 0; i < LEN; i++) printf("%d", buff[i]);


	return 0;
}

void* memset(void* dest, int val, size_t n)
{
	unsigned char* ptr = (unsigned char*)dest;
	while (n-- > 0)
		*ptr++ = (unsigned char)val;
	return dest;

}

void* memset_for(void* dest, int val, size_t n)
{
	unsigned char* ptr = (unsigned char*)dest;
	for (size_t i = 0; i < n; i++)
	{
		*(ptr + i) = (unsigned char)val;
	}
	return dest;
}