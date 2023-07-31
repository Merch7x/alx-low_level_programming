#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: arry of letters:
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int j = 0, i = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
