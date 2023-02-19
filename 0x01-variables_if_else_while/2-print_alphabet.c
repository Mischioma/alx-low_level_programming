#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - print alphabet in lowercase
 *Return: 0 if successful and 1 on error
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar (lc);
	}
	putchar ('\n');

	return (0);
}
