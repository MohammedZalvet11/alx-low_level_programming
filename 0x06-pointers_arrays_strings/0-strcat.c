#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: return value of string dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		i++;
	}

	dest[a] = '\0';
	return (dest);
}


