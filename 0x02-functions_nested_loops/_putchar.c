#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char d)
{
return (write(1, &d, 1));
}
