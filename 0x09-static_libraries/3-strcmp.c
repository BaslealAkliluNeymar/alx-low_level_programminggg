#include "main.h"

/**
* _strcmp - function to compare two chars
* @s1: first char
* @s2: second char
* Return: reutnrs variuos values
*/

int _strcmp(char *s1, char *s2)
{
int i;
int j;

for (i = 0; s1[i] != '\0'; i++)
{
for (j = 0; s2[j] != '\0'; j++)
{
if (s1[i] == s2[j])
{
return (0);
}
else if (s1[i] < s2 [j])
{
return (s1 - s2);
}
else if (s1[i] > s2[j])
{
return (s2 - s1);
}
else
{
return (-1);
}
}
}
}
