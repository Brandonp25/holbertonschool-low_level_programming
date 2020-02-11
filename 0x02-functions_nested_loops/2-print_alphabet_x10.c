#include <stdio.h>
#include "holberton.h"

/**
 *print_alphabet_x10 _ prints the alphabet from a to z 10 times
 *
 *Return: 0;
 */

void print_alphabet_x10(void)
{
	int letter, i;

	letter = 'a';
	for (i = 0; i < 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		letter = 'a';
	}
}
