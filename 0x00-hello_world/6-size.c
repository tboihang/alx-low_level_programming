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

	printf("Size of a char: 1 byte(s)\n",sizeof(char));
	printf("Size of an int: 4 byte(s)\n",sizeof(int));
	printf("Size of a long int: 4 byte(s)\n",sizeof(long int));
	printf("Size of a long long int: 8 byte(s)\n",sizeof(long long int));
	printf("Size of a float: 4 byte(s)\n",sizeof(float));
	return (0)
}
