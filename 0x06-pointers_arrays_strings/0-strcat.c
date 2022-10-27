#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
int dest_len = 0, x;

while (dest[dest_len])
{
dest_len++;
}
for (x = 0; src[x] !=0; x++)
{
dest[dest_len] = src[x];
dest_len++;
}

dest[dest_len] = '\0';
return (dest);
}
