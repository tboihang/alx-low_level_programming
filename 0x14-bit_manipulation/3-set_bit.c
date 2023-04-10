#include "main.h"

/**
 * set_bit - write a function that sets the value bit
 * @n: a pointer to the number will change
 * @index: an index of the bit to set to 1
 *
 * Return: 1 for pass or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
