#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @t: The integer to be computed
 *
 * Return: The absolute value
 */
int _abs(int t)
{
	if (t < 0)
	{
		int abs_val;

		abs_val = t * -1;
		return (abs_val);
	}
	return (t);
}
