#include <stdio.h>


union
{
	struct
	{
		int type;
	}n;
	struct
	{
		int type;
		int intnode;

	}ni;
	struct
	{
		int type;
		double doublenode;
	}nf;
}u, *u_ptr;

int main(void)
{
	u.nf.type = 1;
	u.nf.doublenode = 3.14;

	u_ptr = &u;
	u_ptr->ni.intnode = 5;

	printf("double node type: %d\n", u.nf.type);
	printf("intnode value: %d\n", u_ptr->ni.intnode);
	printf("double node value: %f\n", u.nf.doublenode);

	//printf("double node value is %f and int node value is %d and nf type is %d\n", u.nf.doublenode, u_ptr->ni.intnode,u.nf.type);
	u.ni.type = 2;

	printf("type of ni is %d and type of nf is %d\n", u.ni.type, u.nf.type);


	return 0;
}