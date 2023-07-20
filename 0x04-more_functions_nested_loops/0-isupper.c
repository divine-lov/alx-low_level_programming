#include "main.h"

/**
 * main - entry point
 * Return: 0 success
 */
int _isupper(int c)
{
	char ch = 'A';

	if (isupper(ch))
		return (1);
	else
		return (0);
}
