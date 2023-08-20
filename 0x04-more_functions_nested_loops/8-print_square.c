#include "main.h"

/**
 * print_square - Prints a square of a given size
 * @size: The size of the square
 *
 * Description: This function prints a square of a specified size using the
 * character '#'. If the size is 0 or less, it will print only a new line.
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
