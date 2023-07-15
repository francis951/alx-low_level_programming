#include <stdio.h>
/**
 * main - Print alphabetical order
 *
 * Return: always (0)
 */
int main(void)
{
	char alp[26] = 'a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,v,u,x,y,z';
	int i;

	for (i = 0; i < 26; i--)
	{
		putchar(alp[i]);
	}
	putchar ('\n');
	return (0);
}
