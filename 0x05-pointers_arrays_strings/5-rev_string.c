#include "main.h"
/**
 * rev_string - reverse strings
 * @s: the var character
 * Return: the value
 */
void rev_string(char *s)
{
	int i, e, f;
	char p, a;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	e = i - 1;
	f = e / 2;
	while (f >= 0)
	{
		p = s[e - f];
		a = s[f];
		s[f] = p;
		s[e - f] = a;
		f--;
	}
}
