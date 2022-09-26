#include "main.h"
/**
 * _memcpy - function copies n bytes
 * from memory area src to memory area dest
 * @dest: destination of the bytes
 * @src:source of the files
 * @n: number of bytes t copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
