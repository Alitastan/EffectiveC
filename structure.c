#include <stdio.h>
#include <string.h>


/* Struct sigrecord declares an object identified by sigline
that has a type of struct sigrecord and a pointer to the sigline 
object identified by sigline_p */

typedef struct sigrecord
{
	int signum;
	char signame[20];
	char sigdesc[100];
}SIGLINE_s;



int main(void)
{
	SIGLINE_s sigline;
	SIGLINE_s* sigline_p;

	//Directly accesing members of the sigline object.
	sigline.signum = 5;
	//strcpy(sigline.signame, "SIGINT");
	//strcpy(sigline.sigdesc, "Interrupt from keyboard");
	
	strcpy_s(sigline.signame, sizeof(sigline.signame), "SIGNAME");
	strcpy_s(sigline.sigdesc, sizeof(sigline.sigdesc), "Interrupt from keyboard");
	printf("Direct access: signum: %d\n", sigline.signum);
	printf("Direct access: signame: %s\n", sigline.signame);
	printf("Direct access: sigdesc: %s\n", sigline.sigdesc);


	//Indirectly accesing members of the sigline object.

	sigline_p = &sigline;

	sigline_p->signum = 10;

	strcpy_s(sigline_p->signame, sizeof(sigline_p->signame), "SIGNAME-2");
	strcpy_s(sigline_p->sigdesc, sizeof(sigline_p->sigdesc), "Interrupt from keyboard-2");
	printf("Indirect access: signum: %d\n", sigline_p->signum);
	printf("Indirect access: signame: %s\n", sigline_p->signame);
	printf("Indirect access: sigdesc: %s\n", sigline_p->sigdesc);




	
	return 0;
}