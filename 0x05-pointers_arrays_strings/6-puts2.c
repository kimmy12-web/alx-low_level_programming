#include <stdio.h>
#include "main.h"

/**
 *puts2 - prints every character of a string
 *@str: string input
 *Return: no return
*/

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		if (count % 2 == 0)
			putchar(str[count]);
		count++;
	}
}
