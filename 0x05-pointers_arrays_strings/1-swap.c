#include "main.h"
/**
 * swap_int - function swaps the values of two 
 * integers
 * @a : one of the integers
 * @b : the other integer to be swapped
 * @m : used for swapping
 * Return (0)
 */

void swap_int(int *a, int *b)
{
	int *m = *a;

	*a = *b;
	*b = *m;
}
