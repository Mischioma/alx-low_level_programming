#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print all possible combinations of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
