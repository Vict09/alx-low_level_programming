#include "main.h"
/**
 *_atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 */

int _atoi_digit(char x)
{
	unsigned int res;
	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 */
int _isNumber(char *argv)
{
	int i;

