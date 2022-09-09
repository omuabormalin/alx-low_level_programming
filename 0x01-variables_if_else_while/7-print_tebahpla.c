#include <stdio.h>

/**
* main - to print reverse abc
* Return: will be 0 (success)
*/

int main(void)
{
char s;
for (s = 'z' ; s >= 'a' ; s--)
putchar(s);
putchar('\n');
return (0);
}
