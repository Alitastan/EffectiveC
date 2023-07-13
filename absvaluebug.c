#include <limits.h>
#include <stdlib.h>
#include <stdio.h>


long long unsigned int absolute_value(long long int a);

int main(void)
{
	long long int number = LLONG_MIN;
	
	long long unsigned int absnumber = absolute_value(number);
	
	printf("Absolute value of %lld is %llu", number, absnumber);

	return EXIT_SUCCESS;
}


long long unsigned int absolute_value(long long int a)
{
	return (a >= 0) ? a : -a;

}