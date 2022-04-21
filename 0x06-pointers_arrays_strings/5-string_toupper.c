#include "main.h"

/**
* string_toupper -  changes the string to upper case
* @c: the variable to be chnged
* Return: the vhanges cariale is returned
*/

char *string_toupper(char *c)
{
int i;
for (i = 0; c[i] != '\0'; i++)
{
if (c[i] >= 'a' && c[i] =< 'z')
{
c[i] = c[i] - 32;
}
return (c);
}
