#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - Check if a string is a palindrome recursively.
 * @s: The input string.
 * @start: The index of the current start character.
 * @end: The index of the current end character.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0); 

return (is_palindrome_recursive(s, start + 1, end - 1)); 
}

/**
 * is_palindrome - Wrapper function to check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_recursive(s, 0, length - 1));
}
