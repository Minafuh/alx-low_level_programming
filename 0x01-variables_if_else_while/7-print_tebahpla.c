#include <stdio.h>
/**
 * main -  a program that prints the alphabet in lowercase
 * followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
        char a;

        for (a = 'z'; a >= 'a'; a--)
        {
                putchar (a);
        }
        putchar ('\n');

        return (0);
}
