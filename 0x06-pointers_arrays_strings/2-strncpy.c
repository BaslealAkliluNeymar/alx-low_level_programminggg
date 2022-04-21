#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: number of characters
* Return: the copies string
*/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int len = 0;
while (src[i] != '\0' && i < n )
{
len++;
}
for (i = 0; i <=len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
