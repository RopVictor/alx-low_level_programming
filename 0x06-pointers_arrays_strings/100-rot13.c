/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* Iterate through each character of the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the character is a letter */
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Find the index of the character in the alphabet */
			for (j = 0; alpha[j] != '\0'; j++)
			{
				if (str[i] == alpha[j])
				{
					/* Replace the character with the corresponding ROT13 character */
					str[i] = rot13[j];
					break;
				}
			}
		}
	}

	return (str);
}
