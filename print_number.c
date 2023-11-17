#include "main.h"
/**
 * print_number - Prints a number to the standard output
 * @n: The number to print
 * @base: The base for conversion (8, 10, 16)
 * @specifier: The format specifier ('u', 'o', 'x', 'X')
 *
 * Return: The number of characters printed
 */
int print_number(unsigned int n, int base, char specifier)
{
		char *hex = "0123456789abcdef";
		char *hex_upper = "0123456789ABCDEF";
		char buffer[BUFFER_SIZE];
		int count = 0;
		int i = 0;

		if (base == 10)
		{
				if (n / 10 != 0)
				{
						count += print_number(n / 10, base, specifier);
				}
				buffer[i] = (n % 10) + '0';
				i++;
		}
		else if (base == 8)
		{
				if (n / 8 != 0)
				{
						count += print_number(n / 8, base, specifier);
				}
				buffer[i] = (n % 8) + '0';
				i++;
		}
		else if (base == 16)
		{
				if (specifier == 'x')
				{
						if (n / 16 != 0)
						{
								count += print_number(n / 16, base, specifier);
						}
						buffer[i] = hex[n % 16];
						i++;
				}
				else if (specifier == 'X')
				{
						if (n / 16 != 0)
						{
								count += print_number(n / 16, base, specifier);
						}
						buffer[i] = hex_upper[n % 16];
						i++;
				}
		}

		count += write_buffer(buffer, i);
		return (count);
}
