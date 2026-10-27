#include <stdio.h>
/**
*main - entrée
*Return: 0
*/
int main(void)
{
int i = 1;
putchar ('0');
while(i <= 9)
{
putchar(',');
putchar(' ');
putchar(i + '0');
i++;
}
printf("\n");
return (0);
}
