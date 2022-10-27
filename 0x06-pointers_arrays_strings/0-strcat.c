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
