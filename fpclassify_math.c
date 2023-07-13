#include <limits.h>
#include <stdio.h>
#include <math.h>

const char* show_classification(double x)
{
	switch (fpclassify(x))
	{
	case FP_INFINITE: return "Inf";
	case FP_NAN:	return "NaN";
	case FP_NORMAL:	return "normal";
	case FP_SUBNORMAL:	return "subnormal";
	case FP_ZERO:	return "zero";
	default:	return "unknown";

	}
}

int main(void)
{

	const char *classified = show_classification(15);
	
	while (*classified != '\0')
	{
		printf("%c", *classified);
		classified++;
	}

	return 0;
}