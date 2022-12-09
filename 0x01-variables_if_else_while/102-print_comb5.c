#include <stdio.h>
#include <stdilb.h>

/**
 * main - return a combination of number
 * Return: return 0 if successfull
 */

int main (void)
{
	 for (int i = 0; i <= 99; i++)
	{
		putchar('0' + i / 10);
		putchar('0' + i % 10);
		putchar(' ');


	for (int j = 0; j <= 99; j++)
	{
		putchar('0' + j / 10);
		putchar('0' + j % 10);
		putchar(',');
		putchar(' ');
	}


	 putchar('\n');
	}
	 return (0);
}

