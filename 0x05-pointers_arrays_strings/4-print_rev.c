#include "main.h"
/**
 * print_rev - it prints the rreverse of a string
 * @str: the string
 * Return 0
 */

void print_rev(char *s)
{
	char temp;

	while (*s != '\0')
	{
		temp =temp + *s;
		_putchar(temp);
	}
}
