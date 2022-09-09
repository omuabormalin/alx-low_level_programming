#include <stdio.h>

/**
*main - holds my main codes
*Return: 0 mean code is (success)
*/

int main(void)
{
	char y;

	for (y = 'a' ; y <= 'z' ; y++)
{
	putchar(y);
}
	for (y = 'A' ; y = 'Z' ; y++)
{
	putchar(y);
}
	putchar('\n');
	return (0);
}
