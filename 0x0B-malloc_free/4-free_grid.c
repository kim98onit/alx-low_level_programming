#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d
 * @grid:firstparemeterfor md array of interge
 * @height: secondparemeter of height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
