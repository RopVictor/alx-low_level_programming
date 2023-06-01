/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char *letters = "AEOTL";
	char *replacements = "43071";

	/* Iterate through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate through the available letters and their replacements */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/* Check if the character matches a letter to be replaced */
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				/* Replace the character with the corresponding replacement */
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}
