#include <stdio.h>

int sum_elements(int sarray[5]);
void edit_array(int sarray[5]);

int main(void)
{

	int m[5] = { 3,4,5,6,7};

	for (unsigned int i = 0; i < 5; i++)
	{
		printf("Array M : %d\n", m[i]);
	}

	sum_elements(m);

	edit_array(m);

	for (unsigned int i = 0; i < 5; i++)
	{
		printf("Array M : %d\n", m[i]);
	}

	sum_elements(m);




	return 0;
}

int sum_elements(int sarray[5])
{
	int* pa;
	int sum = 0;

	for (pa = &sarray[0]; pa < &sarray[5]; ++pa)
	{
		sum += *pa;
		printf("Sum : %d\n", sum);
	}

	

	return sum;
	
}

void edit_array(int sarray[5])
{
	int new_array[5] = { 9,10,11,12,13 };
	int* parray = &sarray;
	for (unsigned int i = 0; i < 5; i++)
	{
		sarray[i] = new_array[i];
	}



	return;

}