#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int geek = 0;

		if (*s)
		{
			geek++;
			geek += _strlen_recursion((s + 1);
		}
		return (geek);
}
