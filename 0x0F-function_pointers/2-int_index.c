#include <stdio.h>
#include "2-main.c"
#include "function_pointers.h"
/**
 * int_index - searches for an interger
 * @array: array to search in
 * @size: number of elements in an array
 * @cmp: pointer to a comparing function
 * Return: 0 if true
 * -1 if no elements match and if size is less than 0
 */
int int_index(int *array, int size, int (*cmp))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
