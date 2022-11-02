#include "main.h"
/**
 * _strlen_recursion - Returns the length of a stings
 * @s: The string to be measured.
 *
 * Return: The length of the strings.
 */
int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
