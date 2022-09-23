#include <stdio.h>
#include "main.h"
/*
 * _strcat - function to concatenate two strings
 * @dest: pointer to a string
 * @src: another pointer to the second string
 *
 * Return (*char)
 */
char *_strcat(char *dest, char *src)
{
	int length, j;
	
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
