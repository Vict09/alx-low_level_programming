#include "main.h"
/**
 *swap_int - function swaps the values of integers
 * @a : one of the integers
 * @b : the other integer to be swapped
 * Return (0)
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
