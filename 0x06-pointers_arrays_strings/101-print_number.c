/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Find the divisor to get the leftmost digit */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Print each digit */
	while (divisor != 0)
	{
		_putchar('0' + n / divisor);
		n %= divisor;
		divisor /= 10;
	}
}
