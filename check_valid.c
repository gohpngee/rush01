int (top_visbility_count(int **grid, col));
int (bot_visbility_count(int **grid, col));
int (left_visibility_count(int *row));
int (right_visibility_count(int *row));

int	check_valid(int **grid, int *clues)
{
	int i;

	i = 0;
	while (grid[i][col] != '\0')
	{
		if (top_visibility_count(grid, i) != clues[i] || if (bot_visibility_count(grid, i) != clues[i + grid_size]))
			return (0);
		if (left_visibility_count(grid[i]) != clues[i + 2 * grid_size] || right_visibility_count(grid[i]) != clues[i + 3 * grid_size])
			return (0);
	}
	return (1);
}
