#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sum all parameters
 *
 * @n: int, number of undefine parameters
 *
 * Return: Always 0 Success
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	unsigned int i, sum = 0;

	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
			;
	va_end(list);
	return (sum);
}
