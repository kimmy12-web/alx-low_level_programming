#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints the alphabet
 *
 *Return: returns 0 on success
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

	_putchar('\n');
}
