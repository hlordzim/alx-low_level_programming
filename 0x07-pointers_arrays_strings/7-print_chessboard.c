#include <stdio.h>

/**
 * print_chessboard - Prints the content of an 8x8
 * chessboard represented by the 2D array 'a'.
 * @a: A pointer to the 2D array representing the chessboard.
 *
 * This function iterates through the elements of the 2D
 * array 'a' and prints its content to the console,
 * creating a visual representation of the chessboard.
 */
void print_chessboard(char a[8][8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
