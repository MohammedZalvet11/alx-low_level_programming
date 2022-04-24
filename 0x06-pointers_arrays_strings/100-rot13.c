#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	int count = 0, f;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (f = 0; f < 52; f++)
		{
			if (*(s + count) == alphabet[f])
			{
				*(s + count) = rot13[f];
				break;
			}
		}
		count++;
	}

	return (s);
}
