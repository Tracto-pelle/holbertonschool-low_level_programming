#include "main.h"

/**
*main - entrée
*Return: 0
*Write a function that prints the alphabet, in lowercase, followed by a new l
*
*Prototype: void print_alphabet(void);
*You can only use _putchar twice in your code
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
