#include <stdio.h>

/**
 *main - main function
 *
 *prints the aphabet except e and q
 *
 *Return: returns zero
*/

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	while (i < 26)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(alph[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
