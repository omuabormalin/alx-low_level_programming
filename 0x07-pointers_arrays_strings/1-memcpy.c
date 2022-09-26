#include "main.h"
/**
 * _memset - it fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: set value
 * @n: memory byt
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
