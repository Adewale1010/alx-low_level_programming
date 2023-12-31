#include "main.h"

/**
 * print_square - Prints a square to the terminal with the character #
 * @size: The size of the square
 */

void print_square(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
