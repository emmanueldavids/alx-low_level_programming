#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
int value;

if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
