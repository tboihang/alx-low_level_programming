#include "main.h"

/**
 * _isalpha - Verify for alphabetic char
 * @c: Char is being verified
 * Return: 1 for alphabetic char or 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
