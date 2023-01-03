#include "main.h"
/**
 * print_chessboard - print chessboard given set 2D array
 * @a: 2D array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 64; row++)
	{
		if (row % 8 == 0 && row != 0)
		{
			column = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - column]);
	}
	_putchar('\n');
}
