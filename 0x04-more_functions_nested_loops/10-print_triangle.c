#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;
	
	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = size - 1; j >= 1; j--)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
