#include "main.h"

/**
* print_binary - Function of decimal number that prints a binary
* @n: Number of binary that's printed
*/

void print_binary(unsigned long int n)
{
	int leona, Sis_hoffmann = 0;
	unsigned long int new;

	for (leona = 63; leona >= 0; leona--)
	{
		new = n >> leona;
		if (new & 1)
	{
		_putchar('1');
		Sis_hoffmann++;
	}
	else if (new)
		_putchar('0');
	}
	if (!new)
		_putchar('0');
}
