#include "main.h"
#include <stdio.h>

/**
 * Description: Reverse the string
 * @s: string
 * Return: 0.
 */
void print_rev(char *s)
{

int x;
while (s[x] != '\0')
{
x++;
}
for (x -= 0; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');

}
