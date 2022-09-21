#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: a pointer
 * @src: pointer
 * @n: variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
