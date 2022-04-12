#include "main.h"

/**
 * main - prints the alphabet, in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet()
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
