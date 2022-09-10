#include <stdio.h>
/**
 * main - print all alphabets from a to z
 *
 * Return: Always (Sauccess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
