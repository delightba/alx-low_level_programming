#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: 'the program's description'
 *
 * Return: Always 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
