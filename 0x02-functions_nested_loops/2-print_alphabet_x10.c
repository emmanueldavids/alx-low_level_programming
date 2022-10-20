#include "main.h"

/**
 * print_alphabet_x10 - function name.
 *
 * Description: print_alphabet computes to lowercase letters
 *
 * no return statement
 */
void print_alphabet_x10(void)
{
char world;
int x;

for (x = 0; x <= 9; x++)
{
for (world = 'a'; world <= 'z'; world++)
_putchar(world);
_putchar('\n');
}
}
