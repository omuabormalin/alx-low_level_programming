#include "main.h"
/**
*_islower - for lower case return 1
*else, returns 0
*Return: is zero  for upper case and 1 for lower case
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
