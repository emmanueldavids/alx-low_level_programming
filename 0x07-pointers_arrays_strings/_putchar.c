#include "main.h"
#include <unisdt.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to point
 *
 * Return: On success 1.
 * On error, return -1.
 */

int _putchar(char c)
{
return(write(1, &c, 1));
}
