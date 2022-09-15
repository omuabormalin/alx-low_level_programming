#include "main.h"

/**
*print_most_numbers - prints most of the numbers
*/

void print_most_numbers(void)
{

int i;
for (i = 48; i < 58; i++)
{
if (i != 50 && i != 52)
{
_putchar(i);
}
}
_putchar('\n');
}
