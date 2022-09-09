#include <stdio.h>

/**
* main - this is to print single base digits
* Return: Always 0 (Success)
*/
int main(void)

{
int a;

for (a = 0; a < 10; a++)
putchar(a + '0');
putchar('\n');
return (0);
}
