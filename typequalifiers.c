

#include <stdio.h>


//// This code might appear to work, but it's defective and may fail later. 
// Constant type qualifier
//int main(void) {
//	//const int i = 1;
//	//printf("main: value of 1st i -> %d\n", i);
//	//int* ip = (int*)&i;
//	//*ip = 2; //undefined behaviour
//	//printf("main: value of 2nd i -> %d\n", i);
//
//	int i = 12;
//	const int j = 12;
//	const int* ip = &i;
//	const int* jp = &j;
//	*(int*)ip = 42; // OK
//	*(int*)jp = 42;	// UNDEFINED BEHAVIOUR.
//
//	printf("Value of ip : %d , Value of jp : %d\n", *ip, *jp);
//
//	return 0;
//}


/*Static volatile qualified object are used to model memory-mapped
input/output ports, and static constant volatile qualified objects model
memory-mapped input ports such as a real time clock
	
	The values stored in these objects may change without the knowledge of
	the compiler. For example, every time the value from a real-time clock is
	read, it may change, even if the value has not been written to by the C
	program. Using volatile type lets the compiler know that the value may change
	and ensures that every access to the real time clock occurs.
*/


