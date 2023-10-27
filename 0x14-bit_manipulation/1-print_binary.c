#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */
void print_binary(unsigned long int n)
{
	int lea, mann = 0;
	unsigned long int new;

	for (lea = 63; lea >= 0; lea--)
	{
		new = n >> lea;
		if (new & 1)
		{
			_putchar('1');
			mann++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
