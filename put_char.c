#include "main.h"

/**
* put_char - writes single character to standard output
* @c: character to be written
* Return: number of bytes printed
*/

int put_char(int c)
{
	char ch;
	int count;

	count = 0;
	count += write(1, &c, 1);

	return (count);
}
