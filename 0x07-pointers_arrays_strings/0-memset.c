#include "main.h"
/**
 * _memset- function fills first n bytees of memoryarea
 *pointed to by with constant byte b
 *@s: pointer to a memory space
 *@b: constant byte to fill memory area
 *@n: the number of memory to be filled
 *Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
