#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet in lowercase
*
*Description: Loops through characters from a to z and prints them,
*followed by a new line. Uses _putchar exactly twice.
*/
void jack_bauer(void)
{
	int dheures, heures, dminutes, minutes;

	for (dheures = 0; dheures < 2; dheures++)
	{
		for (heures = 0; heures <= 9; heures++)
		{
			_putchar(heures);
		}
	_putchar(dheures);
	}
	_putchar(':');
	for (dminutes = 0; dminutes < 5; dminutes++)
	{
		for (minutes = 0; minutes <= 9; minutes++)
		{
			_putchar(minutes);
		}
	_putchar(dminutes);
	_putchar('\n');
	}
}
