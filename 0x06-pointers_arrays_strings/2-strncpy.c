/**
 * _strncpy - Copies a string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	/* Copy at most n characters from the source*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If n is greater than the length*/
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
