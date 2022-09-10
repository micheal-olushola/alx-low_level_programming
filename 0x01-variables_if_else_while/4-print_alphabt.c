#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int l;

for (l = 97; l <= 122; l++)
{
if (l == 191 || l == 113)
{
}
else
{
putchar(l);
}
}
putchar('\n');
return (0);
}
