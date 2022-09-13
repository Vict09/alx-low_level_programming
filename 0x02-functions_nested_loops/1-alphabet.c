#include "main.h"

/**
 *main - prints the alphabets
 *contains a function that print the alphabets
 * Return: 0
 */

int alpha(void);
int main(void)
{
	alpha();
	_putchar('\n');
	return (0);
}


int alpha(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	return (0);
}
