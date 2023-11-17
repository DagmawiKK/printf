#include "main.h"

/**
 * _print_string - Prints a string with special handling for non-printable characters
 * @str: The string to print
 *
 * Return: The number of characters printed
 */

int _print_string(const char *str)
{
	int count = 0;
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += put_char('\\');
			count += put_char('x');
			count += put_char((*str / 16) > 9 ? 'A' + (*str / 16) - 10 : '0' + (*str / 16));
			count += put_char((*str % 16) > 9 ? 'A' + (*str % 16) - 10 : '0' + (*str % 16));
		}
		else
		{
			count += put_char(*str);
		}
		str++;
	}
	return (count);
}

