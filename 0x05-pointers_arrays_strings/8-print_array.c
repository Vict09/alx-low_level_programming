#include "main.h"
#include <stdio.h>
/**
 * print_array -function prints n elements of an array
 * @a: pointer parameter
 * @n: integer variable
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; 1 < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
