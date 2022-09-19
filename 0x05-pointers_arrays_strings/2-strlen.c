#include "main.h"
/**
*_strlen - gives the lenght of a string
*@s: var character
*Return: int
*/
int _strlen(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

