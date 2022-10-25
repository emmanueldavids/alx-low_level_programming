#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * Description: Reverse the string
 * @s: string
 */
void print_rev(char *s)
{

int length = strlen(s);
while (length >= '\0')
{
_putchar(s[length]);
}
putchar('\n');

}
