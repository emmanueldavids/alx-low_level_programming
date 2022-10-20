#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
char low, up;
int isletter = 0;

for (low = 'a'; low <= 'z'; low++)
{
for (up = 'A'; up <= 'Z'; up++)
{
if (c == low || c == up)
  isletter = 1;
}
}
return (isletter);
}
