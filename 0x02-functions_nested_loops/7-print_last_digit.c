#include "main.h"

/*
 * main - entry point
 *
 * return: always 0
 */
int print_last_digit(int a);
{
	if (a >= 0 && a <= 9)
		return (a);
	else
	{
		a = _abs(a % 10);
		return (a);
	}
}
