#include <stdio.h>

/**
 *main - main function
 *
 *Prints the alphabet in both lower and upper case
 *
 *Return: returns zero
*/

int main(void)
{
	char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
