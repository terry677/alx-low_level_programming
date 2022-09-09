#include <stdio.h>
/**
 * main - print the alphabet in lowercase, followed by a new line
 *
 * Description: using the main function
 * A program that prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
