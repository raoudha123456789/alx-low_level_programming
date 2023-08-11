#include <stdio.h>
/**
 * main - prints to string
 * Description: Prints the lowercase alphabet in reverse
 * Return: 1
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
