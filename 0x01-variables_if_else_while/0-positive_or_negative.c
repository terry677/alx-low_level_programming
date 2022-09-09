#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * main - print if the number is positive, negative , or zero
 * Description: using the main function
 * this program prints whether a number is positive negative or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0); }
