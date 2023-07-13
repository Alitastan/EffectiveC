#include <limits.h>
#include <errno.h>



errno_t do_stuff(signed long value)
{
	if ((value < SCHAR_MIN) || (value > SCHAR_MAX))
	{
		puts("Error");
		return ERANGE;
	}

	signed char sc = (signed char)value; // cast quiets warning
	//--snip--
}
int main(void)
{

	/*
	Because signed char has a lower integer conversion rank than 
	int or uint, the value stored in c is promoted to an object of
	type signed int accomplished by sign-extending.
	
	Because the operands to the equal operator have different signedness
	and equal rank, the operand with the signed int type is converted to
	the type of the operand with the unsigned int type.*/
	unsigned int ui = UINT_MAX;
	signed char c = -1;

	do_stuff(2);

	if (c == ui)
	{
		puts("-1 equals 4,294,967,295");
	}

	

	return 0;
}


