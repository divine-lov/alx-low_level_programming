#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 *
 * @s: pointer to the initial segment of the string
 *
 * @accept: pointer to the string that consists only of bytes to be checked
 *
 * Return: the number of bytes in the initial segment of @s
 * which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
