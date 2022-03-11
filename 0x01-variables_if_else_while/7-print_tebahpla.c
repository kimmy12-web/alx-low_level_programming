#include <stdio.h>

/**
 *main - main function
 *
 *prints lowercase alphabet in reverse
 *
 *Return: returns zero
*/

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
