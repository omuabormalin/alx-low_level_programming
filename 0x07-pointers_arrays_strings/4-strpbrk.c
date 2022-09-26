#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: bytes of string
 * @accept: string to be searched
 * Return: Pointer to the byte in s that matches one of the bytes in acce
 */

char *_strpbrk(char *s, char *accept)

{

	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
			[
				if (*s == accept[j])
				{
					return (s);
				}
		j++;
	}
	s++;
}
return (0);

