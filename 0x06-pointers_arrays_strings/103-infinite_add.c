#include "main.h"
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int sum;
int i = 0;

while (*n1 != '\0' || *n2 != '\0' || carry != 0)
{
int digit1 = (*n1 != '\0') ? *n1 - '0' : 0;
int digit2 = (*n2 != '\0') ? *n2 - '0' : 0;

sum = digit1 + digit2 + carry;

if (i < size_r - 1)
{
r[i] = '0' + (sum % 10);
i++;
}
else
{
return (0);
}

carry = sum / 10;

if (*n1 != '\0')
n1++;
if (*n2 != '\0')
n2++;
}

if (i < size_r)
{
r[i] = '\0';
return (r);
}
return (0);
}
