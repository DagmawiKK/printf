#include "main.h"

/**
* put_char - writes single character to standard output
* @c: character to be written
* Return: number of bytes printed
*/

int put_char(char c)
{
	return write(1, &c, 1);
}
