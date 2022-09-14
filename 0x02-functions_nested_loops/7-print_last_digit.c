#include "main.h"

/**
 *  print_last_digit - last digit
 *
 *@n: The int to print
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
