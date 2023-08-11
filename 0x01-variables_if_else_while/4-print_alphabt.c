#include <stdio.h>
/**
 * main - prints to string
 * Description: Prints  alphabet in lowercase
 * Return: 1
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
