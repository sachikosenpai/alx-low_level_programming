#include <stdio.h>

/** main - initial point
 * printf - random number
 * random number is produced on every situation
 * return - 0 (success)
 */

int main( )

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					printf("%d\n", n);

					return (0);

}
