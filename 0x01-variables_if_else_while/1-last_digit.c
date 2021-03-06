#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of code
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int n;
	char *string;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 == 0)
		string = "and is 0";
	else if (n % 10 > 5)
		string = "and is greater than 5";
	else if (n % 10 < 6)
		string = "and is less than 6 and not 0";
	printf("Last digit of %d is %d %s\n", n, n % 10, string);
	return (0);
}
