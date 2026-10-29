#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 */
void print_square(int size)
{
int colums, row;
for (colums = 0; colums < size; colums++)
{
for (row = 0; row < size; row++)
_putchar('#');
_putchar('\n');
}
if (size <=0)
_putchar('\n');
}
