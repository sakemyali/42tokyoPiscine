/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:19:45 by tkono             #+#    #+#             */
/*   Updated: 2025/09/14 18:21:00 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	set_clue_value(int n, int **clue_array, char **values)
{
	int	i;
	int	k;
	int	v;

	i = 0;
	v = 0;
	while (i < 4)
	{
		k = 0;
		while (k < n)
		{
			clue_array[i][k] = values[1][v] - '0';
			k++;
			v += 2;
		}
		i++;
	}
}

int	**create_board(void)
{
	int	**board;
	int	i;
	int	j;

	i = 0;
	board = (int **)malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		board[i] = (int *)malloc(sizeof(int) * 4);
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			++j;
		}
		++i;
	}
	return (board);
}

int	**clue_create_n(int n, char **values)
{
	int	**clue_array;
	int	*clue;
	int	i;

	i = 0;
	clue_array = (int **)malloc(sizeof(int *) * 4);
	while (i < 4)
	{
		clue = (int *)malloc(sizeof(int) * n);
		clue_array[i] = clue;
		++i;
	}
	set_clue_value(n, clue_array, values);
	return (clue_array);
}
