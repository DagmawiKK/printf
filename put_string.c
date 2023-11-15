#include "main.h"

/**
* put_string - writes string to standard output
* @string: string to be printed
* Return: length of the string
*/

int put_string(char *string)
{
	int i;

	for (i = 0; *string != '\0'; i++)
		put_char(string[i]);

	return (_strlen(string));
}
