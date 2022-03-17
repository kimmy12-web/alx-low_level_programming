#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - prints numbers 0 to 9 except 2 and 4
*/

void print_most_numbers(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		if ((ch == 50) || (ch == 52))
			ch++;
 		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
