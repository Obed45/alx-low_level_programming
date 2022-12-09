#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 100; i++)
	

	{
		for (int j = 0; j < 100; j++)

		{

			if (i == j) continue;

			if (i < j)
			
			{
				if (i / 10 > 0) putchar(i / 10 + '0');
				else putchar('0');

				putchar(i % 10 + '0');
				putchar(' ');

				if (j / 10 > 0) putchar(j / 10 + '0');
				else putchar('0');

				putchar(j % 10 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
