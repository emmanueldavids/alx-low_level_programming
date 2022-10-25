#include "main.h"
#include <stdio.h>

/**
 * Descrition: _puts - write a string followed by a new line
 * @str: string
 * Return: 0.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');

}
