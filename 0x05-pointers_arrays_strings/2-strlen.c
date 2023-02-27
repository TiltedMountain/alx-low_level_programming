#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int longi = 0;
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return(longi);
}
