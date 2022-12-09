#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Alaways 0 (success)
 *
 */
int main(void)

{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
		        if (i < j) continue;


			if (i < j) 
			{
				putchar(i + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
			}
		}
	}

	putchar('\n');

	return (0);
}
