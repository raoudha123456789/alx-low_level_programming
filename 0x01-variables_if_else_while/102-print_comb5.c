#include <stdio.h>
/**
 * main - prints to string
 * Description: Prints all possible combinations of two two-digit numbers.
 * Return: 0
 */
int main(void)
{
int first_number, second_number;
for (first_number = 0; first_number <= 99; first_number++)
{
for (second_number = first_number; second_number <= 99; second_number++)
{
if (first_number != second_number)
{
putchar(first_number / 10 + '0');
putchar(first_number % 10 + '0');
putchar(' ');
putchar(second_number / 10 + '0');
putchar(second_number % 10 + '0');
if (first_number != 98 || second_number != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
