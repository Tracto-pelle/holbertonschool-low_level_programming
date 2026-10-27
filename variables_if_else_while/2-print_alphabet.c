#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - entrée
*Return: 0
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}