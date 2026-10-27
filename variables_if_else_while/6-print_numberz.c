#include <stdio.h>
/**
*main - entrée
*Return: 0
*/
int main(void)
{
int resultat = 0;

while (resultat <= 9)
{
putchar(resultat + '0');
resultat++;
}
printf('\n');
return (0);
}
