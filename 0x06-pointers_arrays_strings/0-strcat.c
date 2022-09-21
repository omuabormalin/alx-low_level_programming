#include "main.h"
/**
 * _strcat - to concatenate two strings
 * @dest: variable
 * @src: variable
 * Return: dest
 */
char *_strcat(char *desyt, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
