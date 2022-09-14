#include "main.h"
/**
 * _abs - prints the absolute value
 * @c: is the integer that will be used in the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
