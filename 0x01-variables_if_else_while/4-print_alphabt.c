#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase followed by new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q');
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
