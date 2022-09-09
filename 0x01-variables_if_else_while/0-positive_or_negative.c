#include <stdio.h>
#include <stdio.time>
#include <stdlib.h>
/**
 * main - Entry point
 * Author: Razaaqade
 * Date: 09/09/2022
 * Details: c program to print -ve, zero, and +ve results of a random number
 * Return: 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)

		printf("%d is positive\n", n);

	else if (n == 0)

		printf("%d is zero\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

		return (0);
}
