/*
Change the find_element function from Listing 5-13 to return the position
of the key in a. Don’t forget to return an error indication if the key
is not found.*/

#include <stdlib.h>
#include <stdio.h>

#define ARRAY_LEN	10ULL

size_t find_elements(int arr[ARRAY_LEN], int key)
{
	int key_found = 0;
	size_t pos = (size_t)-1;
	//traverse arr and search for key
	for (size_t i = 0; i < ARRAY_LEN; i++)
	{
		if (arr[i] == key)
		{
			key_found = 1;
			pos = i;
			printf("POS: %zu\n", pos);
			break;
			
		}
		
	}
	if (!key_found )
	{
		printf("The key was not found\n");
		
	}

	return pos;

}


int main(void)
{
	
	int array[ARRAY_LEN] = { 1,2,3,4,5,6,7,8,9,10};
	
	find_elements(array, 5);
	
	size_t element = find_elements(array, 2);

	find_elements(array, -5);
	find_elements(array, 50);
	find_elements(array, 999);
	

	return 0;
}

