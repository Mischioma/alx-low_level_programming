#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print lowercase and uppercase
 * Return: always (0)
 */
int main(void)
{
	char ch

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);
	putchar ('\n');

	return (0);
}
