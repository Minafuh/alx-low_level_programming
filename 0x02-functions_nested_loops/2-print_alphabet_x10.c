#include "main.h"
/**
 * print_alphabet_x10 -  a function that prints the alphabet 10 times, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
        char a;
	int i;
	i = 0;

       while (i < 10)
       {
	       a = 'a';
	       while (a <= 'z')
	       {
		       _putchar(a);
		       a++;
	       }
	       _putchar('\n');
	       i++;
}
