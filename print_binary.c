#include "main.h"

/**
 * print_binary - Prints a number in binary format to the standard output
 * @n: The number to convert to binary and print
 *
 * Return: The number of characters printed
 */
int print_binary(unsigned int n)
{
	int count = 0;
	if (n / 2 != 0)
	{
		count += print_binary(n / 2);
	}
	count += put_char((n % 2) + '0');
	return count;
}
