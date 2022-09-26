#include "main.h"
/**
 * _memset - it fills memory with a constant byte
 * @s: pointer block of memory to fill
 * @b: set value
 * @n: memory byte
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
