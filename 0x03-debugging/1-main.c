#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: Always 0
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");
    i = 0;

    /*
     * This code below is commented out to avoid an infinite loop.
     * while (i < 10)
     * {
     *     putchar(i);
     * }
     */

    printf("Infinite loop avoided! \\o/\n");
    return (0);
}
