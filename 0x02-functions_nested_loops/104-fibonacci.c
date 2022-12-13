#include <stdio.h>

/**
 * numlength - returns the lenth of string
 * @num : operand number
 * Return: number of digits
 */

int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1
	}
	return (length);
}
