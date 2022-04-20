#include "main.h"

/**
 * _strlen(char *s) - return the lenght of a string
 * @s: pointer of character
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
