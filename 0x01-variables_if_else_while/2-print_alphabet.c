#include <stdio.h>
/*
 * Main print the the alphabet
 *
 * Return (0) Sucess
 */

int main(void)
{
	char letter;

	for(letter = 'a'; letter<= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return(0);
}
