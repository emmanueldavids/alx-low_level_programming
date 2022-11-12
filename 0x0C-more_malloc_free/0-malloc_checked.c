#include "main.h"
#include <stdlib.h>

/*
 * malloc_checked - Allocates memory using malloc.
 * @b: number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
void *n;

n = malloc(b);
if (n == NULL)
{
exit(98);
}

return (n);
}
