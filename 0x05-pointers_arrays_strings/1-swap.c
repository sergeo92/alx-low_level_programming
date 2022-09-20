#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first value to swap
 * @b: second value to swap
 *
 * Description: swap the values of two integers
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
