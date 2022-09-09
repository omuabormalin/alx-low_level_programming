#include <stdio.h>

/**
* main - the will print hexadecimalks in lower case
* Return: will be 0 (success)
*/

int main(void)
{
char s;
for (s = '0' ; s <= '9' ; s++)
putchar(s);
for (s = 'a' ; s <= 'f' ; s++)
putchar(s);
putchar('\n');
return (0);
}
