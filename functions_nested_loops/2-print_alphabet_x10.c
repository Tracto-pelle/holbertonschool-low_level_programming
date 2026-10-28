#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet in lowercase
*
*Description: Loops through characters from a to z and prints them,
*followed by a new line. Uses _putchar exactly twice.
*/
void print_alphabet_x10(void)
{
	char letter;
	int boucle;

	for (boucle = 0; boucle <= 10; boucle++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}	
	}
	_putchar('\n');
}
