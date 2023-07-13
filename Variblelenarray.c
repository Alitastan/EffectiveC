#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int matrix_sum(size_t rows, int m[][4]);

typedef struct
{
	size_t row;
	size_t column;
	int matrix[][];
}matrx;

void* matrix_sum(size_t rows, size_t columns, int matrix[rows][columns]);



int main(void)
{
	int m[3][5] = { {1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5} };
	matrix_sum(3, 5, m );

	return 0;
}



void* matrix_sum(size_t rows, size_t columns, int matrix[rows][columns])
{
	matrx* ptr = (matrx*) malloc(sizeof(matrx) + sizeof(int) * rows + sizeof(int) * columns);

	if (ptr == NULL)
	{
		return NULL;
	}
	
	ptr->row = rows;
	ptr->column = columns;

	

	int total = 0;

	for (size_t r = 0; r < ptr->row; ++r)
		for (size_t c = 0; c < ptr->column; ++c)
			total += matrix[r][c];
	printf("Total: %d\n", total);
	free(ptr);
	ptr = NULL;
}