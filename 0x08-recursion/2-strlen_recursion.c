#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s : the string to be measured
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s)
	{
		ln++;
		ln += _strlen_recursion(s + 1);
	}
	return (ln);
}

