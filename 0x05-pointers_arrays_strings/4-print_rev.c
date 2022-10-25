#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * Description: Reverse the string
 * @s: string
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
putchar('\n');

}
