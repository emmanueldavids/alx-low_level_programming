#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char text[] = "_putchar";
int k;

for (k = 0; k <= 7; k++)
{
_putchar(text[k]);
}
_putchar('\n');

return (0);
}
