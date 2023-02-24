#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
coid print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
} e
else
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

