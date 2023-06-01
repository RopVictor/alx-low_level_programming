/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * This function appends the src string to the dest string, overwriting the
 * terminating null byte ('\0') at the end of dest, and then adds a new
 * terminating null byte. The strings are concatenated by copying the
 * characters from the source string to the end of the destination string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the destination string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append the source string to the destination string */
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/* Add the terminating null byte */
	dest[i + j] = '\0';

	return (dest);
}
