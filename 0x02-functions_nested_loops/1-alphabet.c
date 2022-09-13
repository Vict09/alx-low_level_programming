#include "main.h"

/**
 *main - prints the alphabets
 *contains a function that print the alphabets
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
