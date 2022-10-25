#include "main.h"
#include <stdio.h>

/**
 * Description: _strlen - return the lenght of a string
 * @s : a pointer starting
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

return (length);
}
