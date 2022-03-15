#include <stdio.h>
#include "main.h"

/**
 *print_sign - prints the sign of a number
 *
 *@n : sign is checked
 *
 *Return: 1 if greater than zero, 0 if is zero, -1 if less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (0);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
