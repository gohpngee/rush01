#include <unistd.h>

void	set_grid(int **grid, grid_size);

void	set_grid(int **grid, grid_size)
{
	while (i < grid_size)
	{
		grid[i] = (int *) malloc (grid_size * sizeof(int));
		while (j < grid_size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	parse_input(

int	main(int argc, char *argv[])
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (arg_count != 2)
	{
		write(1, "Error: Provide clues string please.\n", 36);
		return 1;
	}
	int *clues = (int *) malloc (16 * sizeof(int));
	int **grid = (int **) malloc (grid_size * sizeof(int));
	set_grid(**grid, grid_size);
