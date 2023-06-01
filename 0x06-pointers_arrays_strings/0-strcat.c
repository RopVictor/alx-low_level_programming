/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate the source string to the destination string */
while (src[i] != '\0') 
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

dest[dest_len] = '\0'; /* Add a terminating null byte */

return (dest);

}
