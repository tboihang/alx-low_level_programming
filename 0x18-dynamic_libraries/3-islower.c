#include "main.h"

/**
 * _islower - Verify for lowercase character
 * @c: The chracter to be verified
 * Return: 1 for lowercase char or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
