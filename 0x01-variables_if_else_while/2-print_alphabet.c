#include <stdio.h>

/**
 *main - main function
 *
 *program outputs the alphabet in lowercase
 *
 *Return: returns zero
*/

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
