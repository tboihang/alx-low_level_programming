#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by tboihang
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n",(unsigned)sizeof(a));
	printf("Size of an int: %lu byte(s)\n",(unsigned)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n",(unsigned)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned)sizeof(e));
	return (0)
}
