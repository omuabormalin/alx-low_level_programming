#include "main.h"
/**
 * _memcpy - copies a memory area
 * @dest: data to be copied
 * @src: source of copied
 * @n: memory byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
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
