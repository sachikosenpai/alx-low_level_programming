#include "main"

/**
 * _isalpha - checks if a character is alphabetical
 * @c: the character user to be checked
 *
 * Return: 1 if c is a letter lower case or uppercase otherwise 0
 */

int _isalpha(int c)

{

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

					return (1);

			else

						return (0);



}
