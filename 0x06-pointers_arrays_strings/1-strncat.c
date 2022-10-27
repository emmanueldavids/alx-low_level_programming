#include "main.h"
/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 * */
char *_strncat(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *temp = dest, *start = src;

while (*src)
{
srclen++;
src++;
}

while (*dest)
dest++;

if (n > srclen)
n = srclen;

src = start;

for (; i < n; i++)
*dest++ = *src++;

*dest = '\0';
return (temp);
}
