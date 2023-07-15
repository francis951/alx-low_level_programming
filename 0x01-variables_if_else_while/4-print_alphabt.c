#include <stdio.h>
/**
 * main - will printalphabet except q and e
 *
 * Return: always (0)
 */
int main(void)
{
	int i;

	for (i = 0; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
