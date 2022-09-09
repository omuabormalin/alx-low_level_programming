#include <stdio.h>

/**
*main - holds my main codes
*Return: 0 mean code is (success)
*/

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	for (s = 'A'; s <= 'Z'; s++)
	putchar(y);
	putchar(s);
	putchar('\n');
	return (0);
}
