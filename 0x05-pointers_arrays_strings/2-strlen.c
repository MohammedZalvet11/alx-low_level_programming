#include "main.h"

/**
 * _strlen(char *s) - return the lenght of a string
 * @s: pointer of character
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
