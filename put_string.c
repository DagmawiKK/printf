#include "main.h"

/**
* put_string - writes string to standard output
* @string: string to be printed
* Return: length of the string
*/

int put_string(char *string)
{
  int count = 0;
	while (*str)
	{
		count += put_char(*str);
		str++;
	}
	return count;
}
