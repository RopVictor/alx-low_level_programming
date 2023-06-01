int _putchar(char c);

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

	/* New line */
	_putchar('\n');
}

int _putchar(char c)
{
	/* Implement your own logic to output the character */
	/* For example, you can use the write system call */
	/* and return the number of characters written */
	return (0);
}
