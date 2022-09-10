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
for (b = 0; b <= 9; b++)
{
if (a == b && a < b)
putchar(a);
putchar(b);
if (b == 9 && a !==8)
{
break
;
}
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
