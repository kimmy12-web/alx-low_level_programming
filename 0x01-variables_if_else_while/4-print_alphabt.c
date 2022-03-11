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
	char alph[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	while (i < 24)
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
