#include <stdio.h>	


unsigned int* increment(void);

int main(void)
{
	for (unsigned int i = 0; i < 5; i++)
	{
		increment();
	}

	return 0;
}

unsigned int* increment(void)
{
	
	static unsigned int counter = 0;
	counter++;
	printf("Counter: %d\n", counter);
	unsigned int* pcounter = &counter;

	
	return pcounter;

}
