#include "main.h"

/**
 * binary_to_uint - converts binary numbers to unsigned integers
 * @b: The constant character b holds the binary numbers in form of a string
 *
 *Return: On success unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		c = 2 * c + (b[a] - '0');
	}
	return (c);
}
