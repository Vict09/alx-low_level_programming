#include "main.h"
/**
 * _islower - check for lower case characters
 *
 * Return: 0
 */
int _islower(int c)
{
	int p;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			p = 1;
		}
		else
		{
			p = 0;
		}
	}
	return (p);
}
