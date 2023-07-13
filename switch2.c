
#include <stdio.h>
#include <stdlib.h>

typedef enum{Savings, Checking, MoneyMarket, CD} AccountType;

void assignInterestRate(AccountType account)
{
	double interest_rate;
	switch(account)
	{
	case Savings:
		interest_rate = 3.0;
		break;
	case Checking:
		interest_rate = 1.0;
		break;
	case MoneyMarket:
		interest_rate = 5.6;
		break;
	case CD:
		interest_rate = 7.8;
		break;
	default: abort();

	}
	printf("Interest rate = %.1f\n", interest_rate);
	return;
}

int main(void)
{
	assignInterestRate(Savings);
	assignInterestRate(MoneyMarket);

	return 0;
}