#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 if exited properly, non zero otherwise
 */
int main(void)
{
	int n;
	n = 2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}
