#include <stdio.h>
/**
 * main - write aphebets
 *
 * Return: (0)
 */
int main(void)
{
	ch ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		puchar(ch);
	}
	putchar('\n');
	return (0);
}
