#include "main.h"

/**
* get_bit - Function returns the value of a bit at a given index
* @n: function searches for index
* @index: The number of bit in the index
* Return: Returns the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int amonut_of_bit_values;

	if (index > 63)
		return (-1);
	amonut_of_bit_values = (n >> index) & 1;
	return (amonut_of_bit_values);
}
