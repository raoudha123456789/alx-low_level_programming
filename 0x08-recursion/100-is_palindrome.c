#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int i, j;
int length = strlen(s);

if (length <= 1)
return (1);

for (i = 0, j = length - 1; i < j; i++, j--)
{
if (s[i] != s[j])
return (0);
}

return (1); 
}
