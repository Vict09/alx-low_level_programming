#include "main.h"
/**
 * _strlen - function that returns the length
 * of a srting
 * @s: the string
 * Return:value 
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
