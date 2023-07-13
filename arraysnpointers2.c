#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void func(int arr[5]);

unsigned int i = 0;

int main(void)
{
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };

	func(arr[i]);
	//int x = arr[i][j];

	return 0;
}

void func(int arr[5])
{
	unsigned int sum = 0;
	for (unsigned int j = 0; j < 5; j++)
	{
		//int* parray = &arr[j];
		printf("Result: %d\n", arr[j]);
		sum += arr[j];
	}
	printf("Sum of the chosen array[%d]: %d\n",i, sum);
	
	return;

}