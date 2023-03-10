#include <unistd.h>
/**
 * _putchar - writes the character C to Stdout
 * @c: The character to print
 * Return: 1 Always a success
 * On error, -  is returned, and error is set properly
 */
int _putchar(char c)
{

	return(write(1,&c, 1));
}
