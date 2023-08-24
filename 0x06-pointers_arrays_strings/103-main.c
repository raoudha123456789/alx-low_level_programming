#include "main.h"
#include <stdio.h>
int main(void)
{
char *n = "123456789243457436782357457567847768578564\n"
"5685876876774586734734563456453743756756784458\n";
char *m = "90347906634706972346829145693462596349586\n"
"93246597324659762347956349265983465962349569346\n";
char r[100];
char r2[10];
char r3[11];
char *res;

res = infinite_add(n, m, r, 100);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
n = "1234567890";
m = "1";
res = infinite_add(n, m, r2, 10);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
n = "999999999";
m = "1";
res = infinite_add(n, m, r2, 10);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
res = infinite_add(n, m, r3, 11);
if (res == 0)
{
printf("Error\n");
}
else
{
printf("%s + %s = %s\n", n, m, res);
}
return (0);
}
