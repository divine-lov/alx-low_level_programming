/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: @s
*/

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (s[j] >= 97 && s[j] <= 122)
			s[j] = s[j] - 32;
		j++;
	}
	return (s);
}
