#include "main.h"
#include <stdlib.h>
/**
 * free_grid - the function free grid;
 * @grid: parameter of type int.
 * @height: dimendion height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
