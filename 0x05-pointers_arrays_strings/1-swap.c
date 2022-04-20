#include "main.h"

/**
 * swap_int(int *a, int *b)
 * @a: pointer a
 * @b: pointer b
 * Return void
 */
void swap_int(int *a, int *b)
{
	int ab;

	*a += *b;
	*b = *a - *b;
	*a = *a - *b;

}
