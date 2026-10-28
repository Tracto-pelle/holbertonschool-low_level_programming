#include "main.h"
/**
*print_sign - checks for lower character
*@c: character to be checked
*return 1 if c is lowercase, oterwhise 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
