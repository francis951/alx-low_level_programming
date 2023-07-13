#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * return always 0 (success)
 */
int main(void){
	write(2, "and piece of art is useful \" - Dora korpar , 2015-10-19\n", 59);
	return (1);
}
