/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:10:27 by pngoh             #+#    #+#             */
/*   Updated: 2024/10/06 14:55:48 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#declare grid_size 4

int	left_visibility_count(int *row);
int	right_visibility_count(int *row);
int	top_visibility_count(int **grid, int col);
int bot_visibility_count(int **grid, int col);

int	left_visibility_count(int *row)
{
	int current_max;
	int count;
	int i;
	
	current_max = 0;
	count = 0;
	i = 0;
	while (row[i] != '\0')
	{
		if (row[i] > current_max)
		{
			current_max = row[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	right_visbility_count(int *row)
{
	int current_max;
	int count;
	int i;

	current_max = 0;
	count = 0;
	i = grid_size;
	while (row[i] != '\0')
	{
		if (row[i] > current_max)
		{
			current_max = row[i];
			count++;
		}
		i--;
	}
	return (count);
}

int top_visibility_count(int **grid, int col)
{
	int current_max;
	int count;
	int i;

	current_max = 0;
	count = 0;
	i = 0;
	while (grid[i][col] != '\0')
	{
		if (grid[i][col] > current_max)
		{
			current_max = grid[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int bot_visibility_count(int **grid, int col)
{
	int current_max;
	int count;
	int i;

	current_max = 0;
	count = 0;
	i = grid_size;
	while (grid[i][col] != '\0')
	{
		if (grid[i][col] > current_max)
		{
			current_max = grid[i][col];
			count++;
		}
		i--;
	}
	return (count);
}
