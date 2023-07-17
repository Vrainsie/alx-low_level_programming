#include <stdlib.h>

/**
  * free_grid - free malloc
  * @grid: the array
  * @height: size
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
