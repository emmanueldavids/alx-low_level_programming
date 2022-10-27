#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
int dlen = 0, x;

while (dest[dlen])
{
dlen++;
}
for (x = 0; src[x] != 0; x++)
{
dest[dlen] = src[x];
dlen++;
}

dest[dlen] = '\0';
return (dest);
}
