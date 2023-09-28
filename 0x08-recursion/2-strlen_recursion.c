#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lomgit = 0;

	if (*s)
	{
		longit++;
		lomgit += _strlen_recursion(s + 1);
	}
	return (lomgit);
}

