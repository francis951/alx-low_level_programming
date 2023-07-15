#include <stdio.h>
/**
 * main - gives out the capitalize letters
 *
 * Retun: always (0)
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar ('\n');
	return (0);
}
