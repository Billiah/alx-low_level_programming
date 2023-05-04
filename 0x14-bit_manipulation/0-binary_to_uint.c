#include <main.h>
/**
 * binary_to_uint function converts binary numbers to unsigned integers
 * @b: The constant character b holds the binary numbers in form of a string
 *
 *The function returns the unsigned integers
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int a = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
	if (*b != '0' && *b != '1')
		return (0);
	a <<= 1;
	if (*b == '1')
		a = a + 1;
		b++;
	}

	return (a);
}

