#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry code
 *@grid: int
 *@height: int
 *Return: always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
