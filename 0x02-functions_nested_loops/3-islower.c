#include "main.h"

/*
 * main - entry point
 *
 * check if character is lower case
 *
 * return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
