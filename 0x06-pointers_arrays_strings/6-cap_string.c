#include "main.h"
#include <ctype.h>

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: 1 if c is a separator, 0 otherwise.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i]; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int capitalize = 1;
char *ptr = str;

while (*ptr)
{
if (is_separator(*ptr))
{
capitalize = 1;
}
else if (capitalize && islower(*ptr))
{
*ptr = toupper(*ptr);
capitalize = 0;
}
else
{
capitalize = 0;
}
ptr++;
}

return (str);
}
