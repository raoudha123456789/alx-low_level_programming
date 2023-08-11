#include <stdio.h>
/**
 * main - prints to string
 * Description: Prints all single digit numbers of base 10
 * Return: 1
 */
int main(void)
{
int digit;
for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');
}
putchar('\n');
return (0);
}
