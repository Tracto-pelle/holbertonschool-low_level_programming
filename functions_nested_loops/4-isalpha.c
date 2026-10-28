#include "main.h"
/**
*check lowercase letter int'_islower'
*@c: character to be check
*return
*1 if c is lowercase, oterwhise 0
*/
int_isalpha(int c)
{
if((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
return(1);
else
return(0);
}