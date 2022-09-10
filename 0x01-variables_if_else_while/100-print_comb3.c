#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l, u;

for (l = 48; l <= 57; l++)
{
for (u = 48; u <= 57; u++)
{
if (l == u || u <= l)
{
}
else
{
putchar(l);
putchar(u);
if (l == 56 && u == 57)
{
}
else
{
putchar(44);
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
