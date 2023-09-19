#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackname
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[84];
	int i, sum, diff;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 84; i++)
	{
		pass[i] = rand() % 70;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 70)
		{
			diff = 2772 - sum - '0';
			sum += diff;
			putchar(diff + '0');
			break;
		}
	}
	return (0);
}
