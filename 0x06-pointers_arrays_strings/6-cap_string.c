#include "main.h"

/**
* cap_string -  to capitalize first letters
* @s: string to modify
* Return: characters of all chapitzalised
*/

char *cap_string(char *c)
{
int i;
int j;
char cia[13] = {' ','\t','\n',',',';','.','!','?','"','(',')','{','}'};

for (i = 0; c[i] != '\0'; i++)
{
if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
{
c[i] = c[i] - 32;
}
for (j = 0; j < 13; j++)
{
if (c[i] == cia[j])
{
if (c[i + 1] >= 'a' &&  c[i + 1] <= 'z')
{
c[i + 1] = c[i + 1] - 32;
}
}
}
}
return (c);
}
