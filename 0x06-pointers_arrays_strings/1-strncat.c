/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append at most n characters from the source string */
	while (src[i] != '\0' && n > 0)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
		n--;
	}

	/* Add the null terminator to the end of the concatenated string */
	dest[dest_len] = '\0';

	return (dest);
}
