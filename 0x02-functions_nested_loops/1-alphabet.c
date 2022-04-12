#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet(void);
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
