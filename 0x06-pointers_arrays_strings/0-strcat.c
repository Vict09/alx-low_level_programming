#include <stdio.h>
#include "main.h"
/**
 * _strcat - function to concatenate two strings
 * @dest:pointer to a string
 * @src:another pointer to the second string
 * Return (*char)
 */
char *_strcat(char *dest,char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return(*dest);
}
