#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char razaaq;

	for (razaaq = 'a'; razaaq <= 'z'; razaaq++)
	{
		if (razaaq != 'q' && razaaq != 'e')

			putchar(razaaq);
	}
	putchar('\n');

	return (0);
}
