#include "main.h"
/**
 * _islower - check for lower case characters
 *
 * Return: 0
 */
int _islower(int c)
{
	int p;
	int i;

	for (i = 97; i <= 122; i++)
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
