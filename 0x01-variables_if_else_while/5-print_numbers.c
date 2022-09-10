#include <stdio.h>
/**
 * main - Prints single digit numbers from 0 to 10
 * Return: Always (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
