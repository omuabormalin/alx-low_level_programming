#include "main.h"
/**
*_islower - print loewer case
*Return is zero 0
*/

int _islower(int c)
{
if (c >= 97  && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
