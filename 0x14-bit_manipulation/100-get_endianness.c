#include "main.h"

/**
* get_endianness - Function that checks the endianness
* Return: If big return 0, otherwise return 1
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
