#include <stdio.h>
/**
 * main - Print alphabets in lowercase then followed by a new line
 * using putchar
 * Return; Always (Success)
 */

int main(void)
{
	int lw = 'a';
	
	while (lw <= 'z')
	{
		if (lw == 'e' || lw == 'q')
		{
			lw += 1;
		}
		else
		{
			putchar(lw);
			lw += 1;
		}
	}
	putchar('\n');
	return (0);
}
