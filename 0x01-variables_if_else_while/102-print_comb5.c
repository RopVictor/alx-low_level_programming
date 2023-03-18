#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j;

for (i = 0; i < 99; i++)
{
for (j = i; j < 99; j++)

{

putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');

/* print second two-digit number */
putchar((j / 10) + '0');
putchar((j % 10) + '0');

/* print comma and space unless it's the last combination */
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');            }
}
}

putchar('\n');

return (0);
}
