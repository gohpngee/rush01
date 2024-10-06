int	solve(int **grid, int *clues, int row, int col)
{
	if (row == grid_size)
		return check_valid(grid,clues);

	int	next_row;
	int next_col;

	next_row = (col == grid_size - 1) ? row + 1 ; row;
	next_col = (col + 1) % grid_size;


