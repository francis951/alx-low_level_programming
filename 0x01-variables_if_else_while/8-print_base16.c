#include <stdio.h>
/**
 * main - print number between 0 to 9and letter between a to f
 *
 * Return: success 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 101; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
