#include "main.h"
/**
*print_alphabet - print 10x
*Return - zero value 0
*/

void print_alphabet_x10(void)
{
int w;
int m;
for (w = 0; w <= 9; w++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
}
