#include "main.h"

/**
 * free_grid - function to free grid
 * @grid: grid to free
 * @height: height of grid
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
