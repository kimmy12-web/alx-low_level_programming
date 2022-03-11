#include <stdio.h>

/**
 *main - main function
 *
 *prints single digit numbers of base 10
 *
 *Return: returns zero
*/

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

		putchar((num % 10) +'0');


	putchar('\n');
	return (0);
}

