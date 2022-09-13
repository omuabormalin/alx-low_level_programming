#include "main.h"
/**
*print_alphabet - print 10x
*Return - zero value 0
*/

void print_alphabet_x10(void);
{
int m;
int w;
for (w = 0; w <= 10; w++)
{
for (m = 'a'; m <= 'z'; m++)
_putchar(m);
_putchar('\n');
}
return (0);
}
