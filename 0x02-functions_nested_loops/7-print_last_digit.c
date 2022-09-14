#include "main.h"
/**
 * print_last_digit - this prints the last digit of a number
 * @c: this is the integer that takes the value of the function
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int d;

	d = c%10;
	if (d < 0)
	{
		d *= -1;
		_putchar(d + '0');
		return (d);
}
