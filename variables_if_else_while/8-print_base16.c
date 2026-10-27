#include <stdio.h>
/**
*main - entrée
*Return: 0
*/
int main(void)
{
int resultat = 0;
char letter = 'a';

while (resultat <= 9)
{
putchar(resultat + '0');
resultat++;
}
while (letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
