#include "main.h"
/**
 * _islower - check for lower case characters
 *
 * Return: 0
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return X;
}
