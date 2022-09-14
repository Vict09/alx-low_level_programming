#include "main.h"
/**
 * print_last_digit - this prints the last digit of a number
 * @c: this is the integer that takes the value of the function
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int l, p;

	l = n % 10;
	if (l < 0)
	{
		l = -l;
	}
	p = '0' + l;
	-putchar(p);
	return (l);
}
