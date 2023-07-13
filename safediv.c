#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

bool safediv(int dividend, int divisor, int* quotient);

int main(void)
{
	int result = 0;
	int* presult = &result;
	bool issafe = false;
	
	safediv(INT_MIN, -2, presult);

	printf("Result: %d\n", result);
	return 0;
}

bool safediv(int dividend, int divisor, int* quotient)
{
	if (!quotient) return false; // test if quotient is null
	if ((divisor == 0) || ((dividend == INT_MIN) && (divisor == -1))) return false;
	*quotient = dividend / divisor;
	return true;
}

