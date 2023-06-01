/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string.
 * If the result cannot be stored in r, return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum;
	int i, j;

	/* Calculate the lengths of the input strings */
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	/* Check if the result can be stored in r */
	if (size_r <= len1 || size_r <= len2)
		return 0;

	carry = 0; /* Initialize the carry to 0 */
	i = len1 - 1;
	j = len2 - 1;

	/* Perform addition digit by digit */
	while (i >= 0 || j >= 0 || carry != 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10; /* Calculate the carry */
		sum %= 10; /* Calculate the current digit */

		r[--size_r] = sum + '0'; /* Store the digit in reverse order */
	}

	/* Shift the result to the beginning of the buffer */
	while (size_r < len1 + len2 && size_r < size_r + 1)
	{
		r[size_r - 1] = r[size_r];
		size_r++;
	}

	r[size_r] = '\0'; /* Null-terminate the result */

	return r;
}

