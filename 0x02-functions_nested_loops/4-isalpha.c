#include "main.h"

/**
 * _isalpha - the function name
 * @c: describes the code parameter
 * Return: will return an integer
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
