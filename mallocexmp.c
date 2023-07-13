#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
	char c[10];
	int i;
	double d;
}widget;





int main(void)
{
	widget* pwidget = (widget*) malloc(sizeof(widget));

	widget w = { "abc", 9, 3.2};
	memcpy(pwidget, &w, sizeof(widget));
	printf("p.c = %s.\n", pwidget->c);
	printf("p.i = %d.\n", pwidget->i);
	printf("p.d = %f.\n", pwidget->d);
	

	return 0;
}