#include <stdio.h>

/**
* main - this is to print double figurs
* Return: will be 0 as (success)
*/

int main(void)
{
int a;
int b;
for (a = 0; a <= 9; a++)
{
for (b = 1; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');

if (a == 9 && b != 9)

{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
