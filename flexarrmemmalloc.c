#include <stdlib.h>
#include <stdio.h>
typedef struct
{
	size_t num;
	int data[];
}widget;


void* func(size_t array_size)
{
	widget* p = (widget *) malloc(sizeof(widget) + sizeof(int) * array_size);

	if (p == NULL)
	{
		return NULL;
	}

	p->num = array_size;
	for (size_t i = 0; i < p->num; ++i)
	{
		p->data[i] = 17;
		printf("%d", p->data[i]);
	}
	free(p);
	p = NULL;
}

int main(void)
{
	
	func(5);

	return 0;
}