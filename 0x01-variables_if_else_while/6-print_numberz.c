#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a < '10'; a++)
	{
		putchar (a);
	}
	putchar ('\n');
	return (0);
}
