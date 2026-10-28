#include "main.h"
/**
*int_isalpha check if is upercase ou lowercase'
*@c: character to be check
*return
*1 if c is lowercase or upercase, oterwhise 0
*/
int int_isalpha(int c)
{
if((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
return(1);
else
return(0);
}
