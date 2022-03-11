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

	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
