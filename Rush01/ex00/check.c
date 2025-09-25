/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:48:21 by tkono             #+#    #+#             */
/*   Updated: 2025/09/14 18:21:06 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	make_column(int **board, int *column, int j);

int	visible_count_incre(int *seq)
{
	int	highest;
	int	seen;
	int	i;

	highest = -10;
	seen = 0;
	i = 0;
	while (i < 4)
	{
		if (seq[i] > highest)
		{
			seen++;
			highest = seq[i];
		}
		++i;
	}
	return (seen);
}

int	visible_count_decre(int *seq)
{
	int	highest;
	int	seen;
	int	i;

	highest = -10;
	seen = 0;
	i = 3;
	while (i > -1)
	{
		if (seq[i] > highest)
		{
			seen++;
			highest = seq[i];
		}
		--i;
	}
	return (seen);
}

int	check_overlap(int r, int c, int **board, int num)
{
	int	used_in_row;
	int	used_in_col;
	int	i;
	int	j;

	used_in_row = 0;
	used_in_col = 0;
	i = 0;
	j = 0;
	while (j < c)
	{
		if (board[r][j] == num)
			used_in_row = 1;
		++j;
	}
	while (i < r)
	{
		if (board[i][c] == num)
			used_in_col = 1;
		++i;
	}
	if (used_in_row == 1 | used_in_col == 1)
		return (1);
	return (0);
}

int	check_board(int **board, int **clue_array)
{
	int	r;
	int	c;
	int	column[4];

	r = 0;
	c = 0;
	while (r < 4)
	{
		if (visible_count_incre(board[r]) != clue_array[2][r])
			return (0);
		if (visible_count_decre(board[r]) != clue_array[3][r])
			return (0);
		++r;
	}
	while (c < 4)
	{
		make_column(board, column, c);
		if (visible_count_incre(column) != clue_array[0][c])
			return (0);
		if (visible_count_decre(column) != clue_array[1][c])
			return (0);
		++c;
	}
	return (1);
}
