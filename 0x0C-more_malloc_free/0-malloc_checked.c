#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Write a function that allocates memory
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	void *dew;

	dew = malloc(b);
	if (dew == NULL)
		exit(98);
	return (dew);
}
