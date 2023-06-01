/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	/* Iterate through each character of the string */
	while (str[i] != '\0')
	{
		/* Check if the character is a word separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			capitalize_next = 1;
		}
		/* Check if the character is a letter */
		else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			/* Capitalize the letter if necessary */
			if (capitalize_next)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 'a' + 'A';
				capitalize_next = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] - 'A' + 'a';
			}
		}

		i++;
	}

	return (str);
}
