#include "main.h"
/**
 * *malloc_checked - function assign space in memory
 * @b:the byte of space to be assigned
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
