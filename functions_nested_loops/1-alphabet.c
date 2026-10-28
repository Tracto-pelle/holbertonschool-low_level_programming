#include "main.h"
/**
*main - entrée
*Return: 0
*/
int print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
	_putchar(letter);
letter++;
}
	_putchar('\n');
return (0);
}
