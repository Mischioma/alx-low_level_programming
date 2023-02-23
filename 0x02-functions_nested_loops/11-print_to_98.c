#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all numbers from the input to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	print_to_98(98);

	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
