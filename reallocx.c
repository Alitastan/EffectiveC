
#include <string.h>
#include <stdlib.h>




int main(void)
{
	void* p2;
	void* p = malloc(100);

	void* vp = NULL;
	void* newp;

	unsigned int nsize = 150;

	if ((nsize == 0) || (p2 = realloc(p, nsize)) == NULL)
	{
		free(p);
		p = NULL;
		return NULL;
	}
	
	p = p2; // p is assigned the pointer to the newly reallocated storage.


	/*  This can be replaced with 
	newp = realloc(vp,newsize);  */
	unsigned int newsize = 250;
	if (vp == NULL)
		newp = malloc(newsize);
	else
		newp = realloc(vp, newsize);


	return 0;
}