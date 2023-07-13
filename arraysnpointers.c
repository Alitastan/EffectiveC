#include <stdio.h>
#include <stdlib.h>

char str[11];
char str2[11];

int main(void)
{
	for (unsigned int i = 0; i < 10; i++)
	{
		//str[i] = 'A' + i;
		*(str + i) = 'A' + i;
		printf("The address of str[%d] is %p and the value stored there is %c\n", i, &str[i], str[i]);
	}
	str[10] = '\0';
	printf("str: %s\n", str);
	

	for (unsigned int i = 0; i < 10; i++) {
		str2[i] = '0' + i;
		printf("The address of str2[%d] is %p and the value stored there is %c\n", i, (str2+i), *(str2+i));
	}
	str2[10] = '\0';
	printf("str2 : %s\n", str2);


	return EXIT_SUCCESS;
}