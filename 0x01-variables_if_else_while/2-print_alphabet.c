#include <stdio.h>

/**
 * main - Print alphabet in lower case
 *
 * return - Always 0 success
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')
{

	putchar(c);
	c++;
}
	putchar('\n');
	return (0);

}
