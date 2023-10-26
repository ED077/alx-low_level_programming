#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index
* @n: Pointer to change number
* @index: The index sets a bit 1
* Return: Return 1 if success, otherwise -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
