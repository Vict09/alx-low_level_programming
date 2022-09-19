#include "main.h"
/**
 * print_rev - it prints the rreverse of a string
 * @str: the string
 * Return 0
 */
void print_rev(char *s)
{
	int i,len,temp;

	len = _strlen(s);//to get the lengthofstring
	for (i = 0; i < len/2; i++)
	{
		temp = s[i];
		s[i] = s[len -i-1];
		s[len -i-1] = temp;
	}
}
