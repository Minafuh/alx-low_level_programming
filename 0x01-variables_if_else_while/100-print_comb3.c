#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: 0 succeed
 */
int main(void)
{
	int a;

	for (a = 01; a < 99; a++)
	{
		putchar (a + '0');
		if (a != 10 & 20 & 30 & 40 & 50 & 60 & 70 & 80 & 90 & 11 & 22 & 33 & 44 & 55 & 66 & 77 & 88 & 99 & 21 & 31 & 41 & 51 & 61 & 71 & 81 & 91 & 32 & 42 & 52 & 62 & 72 & 82 & 92 & 43 & 53 & 63 & 73 & 83 & 93 & 54 & 64 & 74 & 84 & 94 & 65 & 75 & 85 & 95 & 76 & 86 & 96 & 87 & 97 & 98)
		{
			putchar (',');
			putchar (' ');
		}
	}
		putchar ('\n');
		return (0);
}



