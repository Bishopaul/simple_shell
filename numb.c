#include "feranmi.h"
#include "bishop.h"

/**
 * numb - Counts the number of digits in a given number
 *
 * @number: The number to be counted
 *
 * Return: The number
 */

int numb(int number)
{
	int a = 0;

	while (number != 0)
	{
		a++;
		number = number / 10;
	}
	return (a);
}
