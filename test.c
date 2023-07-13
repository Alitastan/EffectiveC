#include <stdio.h>


/*Within the swap function the parameters pa and pb now both declared to
have the type pointer to int and contain copies of the arguments passed to swap()
from the calling function (in this case, main.)

These address copies still refer to the exact same objects.*/
void swap(int *pa, int *pb) // pa -> a : 17  pb -> b : 21
{
	int t = *pa; // t : 17
	*pa = *pb;  // pa -> a : 21  pb -> b : 21
	*pb = t; // pa -> a : 21  pb -> b : 17

	//printf("swap: a = %d b = %d\n", *pa, *pb);
	return;
}

int main(void)
{
	int a = 17; // a:17
	int b = 21; // b: 21

	swap(&a, &b); 
	printf("main: a = %d b = %d\n", a, b);  // a:21 b:17
	return 0;
}