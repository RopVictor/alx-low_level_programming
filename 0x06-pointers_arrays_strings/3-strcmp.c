/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return:
 *   Less than 0 if s1 is less than s2.
 *   0 if s1 is equal to s2.
 *   Greater than 0 if s1 is greater than s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	int i = 0;

	/* Compare each corresponding character of the strings */
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	/* Return the difference between the ASCII values of the non-matching characters */
	return s1[i] - s2[i];
}
