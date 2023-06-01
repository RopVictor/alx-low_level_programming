void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position of the line in hexadecimal */
		for (j = 7; j >= 0; j--)
		{
			int shift = j * 4;
			int hex = (i >> shift) & 0xF;
			if (hex < 10)
				_putchar('0' + hex);
			else
				_putchar('a' + (hex - 10));
		}
		_putchar(':');

		/* Print the hexadecimal content of the buffer, 2 bytes at a time */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				int hex = (unsigned char)b[i + j];
				int upper = hex / 16;
				int lower = hex % 16;
				if (upper < 10)
					_putchar('0' + upper);
				else
					_putchar('a' + (upper - 10));
				if (lower < 10)
					_putchar('0' + lower);
				else
					_putchar('a' + (lower - 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (j % 2 != 0)
				_putchar(' '); /* Separate the bytes with a space */
		}

		_putchar(' ');

		/* Print the content of the buffer */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= ' ' && b[i + j] <= '~')
					_putchar(b[i + j]); /* Printable character */
				else
					_putchar('.'); /* Non-printable character */
			}
			else
			{
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

