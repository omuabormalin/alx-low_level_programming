#include "main.h"
/**
 * swap_int - to swap a pointer
 * @a: first var
 * @b: 2nd var
 */
void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
