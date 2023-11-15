#include "main.h"

/**
* put_char - writes a single character to the standard output
* @c: Character to be written
* Return: number of bytes written
*/
int put_char(int c)
{
	return (write(1, &c, 1));
}

/**
* put_string - Writes a string to the standard output
* @string: Pointer to the string to be written
* Return: Returns the number of characters written
*/

int put_string(char *string)
{
	int i;

	for (i = 0; *string != '\0'; i++)
	{
		put_char((int)*string);
		++string;
	}

	return (i);
}

/**
 * formatter - Processes format specifiers
 * @decorator: The format specifier character
 * @passed_args: Variable argument list containing
 * the arguments corresponding to the format specifiers
 * Return: Returns the count of characters or bytes written
*/

int formatter(char decorator, va_list passed_args)
{
	int count;

	count = 0;
	if (decorator == 'c')
		count = put_char(va_arg(passed_args, int));
	else if (decorator == 's')
		count = put_string(va_arg(passed_args, char *));
	else if (decorator == '%')
		return (write(1, &decorator, 1));

	return (count);
}

/**
* _printf - Formats and prints data to the standard output
* @format: The format string containing format specifiers
* Return: Returns the count of characters or bytes written
*/

int _printf(const char *format, ...)
{
	va_list passed_args;
	int i;
	int count;

	va_start(passed_args, format);

	for (i = 0; *format != '\0'; i++)
	{
		if (*format == '%')
			count += formatter(*(++format), passed_args);
		else
			count += write(1, format, 1);
		++format;
	}

	va_end(passed_args);

	return (count);
}
