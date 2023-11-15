#include "main.h"

/**
* _strlen - finds length of string
* @str: the string it takes
* Return: length of string
*/

int _strlen(char *str)
{
	int i, count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	return (count);
}
