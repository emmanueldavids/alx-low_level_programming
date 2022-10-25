#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two nums
 * @b : first pointer
 * @a : second pointer
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
int constant = *a;
*a = *b;
*b = constant;
}
