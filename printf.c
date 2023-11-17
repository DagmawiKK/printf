#include "main.h"

/**
 * _printf - Formats and prints data to the standard output
 * @format: The format string containing format specifiers
 * Return: Returns the count of characters or bytes written
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;
	char *buffer;
	int len;

	va_start(args, format);
	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
			count += put_char(*ptr);
		else
		{
			ptr++;
			if (*ptr == 'c')
				count += put_char(va_arg(args, int));
			else if (*ptr == 's')
			{
				buffer = va_arg(args, char *);
				len = put_string(buffer);
				count += len;
			}
			else if (*ptr == 'd' || *ptr == 'i')
				count += print_number(va_arg(args, int), 10, *ptr);
			else if (*ptr == 'u')
				count += print_number(va_arg(args, unsigned int), 10, *ptr);
			else if (*ptr == 'o')
				count += print_number(va_arg(args, unsigned int), 8, *ptr);
			else if (*ptr == 'x' || *ptr == 'X') 
				count += print_number(va_arg(args, unsigned int), 16, *ptr);
			else if (*ptr == 'b')
				count += print_binary(va_arg(args, unsigned int));
			else if (*ptr == 'S')
				count += _print_string(va_arg(args, char *));
			else if (*ptr == 'p')
				count += print_pointer(va_arg(args, void *));
			else if (*ptr == '%')
				count += put_char('%');
		}
	}
	va_end(args);
	return (count);
}
