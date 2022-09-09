#include <stdio.h>

/**
* main - print single digits
* Return: will be 0 (succes)
*/

int main(void)
{
int a;
for (a = 0; a < 10; a++)
putchar(a +'0');
if (a > 0)
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
