#include <stdio.h>

/**
* main - this is where my main code is
* Return: 0 is (success)
*/

int main(void)
{
char u;
for  (u = 'a' ; u <= 'z' ; u++)
{
if (u != 'e' && != 'q')
putchar(u);
}
putchar('\n');
return (0);
}
