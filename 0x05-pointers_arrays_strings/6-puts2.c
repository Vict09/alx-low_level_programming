#include "main.h"
/**
 * puts2 - print other character
 * @str: the string
 * Return (0)
 */
void puts2(char *str)
{
	int i;
	int len;
	len = _strlen(str);
	for (i = 0; i < len + 1; i++)
	{
		if ( i % 2 != 0)
		{
			_putchar(*str);
		}
	}
}
