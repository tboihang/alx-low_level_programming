#include "main.h"

/**
 * clear_bit - posit the value of a given bit to 0
 * @n: evidence to the number to change
 * @index: indexed of the bit to clear
 *
 * Return: 1 for pass or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
