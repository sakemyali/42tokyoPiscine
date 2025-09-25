/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 23:19:29 by tkono             #+#    #+#             */
/*   Updated: 2025/09/24 23:19:31 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	set_dp(int **dp, int height, int width)
{
	int	i;

	i = 0;
	while (i < height + 1)
	{
		dp[i][0] = 0;
		++i;
	}
	i = 0;
	while (i < width + 1)
	{
		dp[0][i] = 0;
		++i;
	}
}

int	**make_dp(int height, int width)
{
	int	**dp;
	int	i;

	dp = (int **)malloc(sizeof(int *) * (height + 1));
	if (!dp)
		return (NULL);
	i = -1;
	while (++i < (height + 1))
	{
		dp[i] = (int *)malloc(sizeof(int) * (width + 1));
		if (!dp[i])
		{
			free(dp);
			return (NULL);
		}
	}
	set_dp(dp, height, width);
	return (dp);
}

int	ft_min(int **dp, int i, int j)
{
	int	min;

	min = 2147483647;
	if (dp[i - 1][j] < min)
		min = dp[i - 1][j];
	if (dp[i][j - 1] < min)
		min = dp[i][j - 1];
	if (dp[i - 1][j - 1] < min)
		min = dp[i - 1][j - 1];
	return (min);
}

void	solver(char **map, char *symbols, int **dp, int size_pos[5])
{
	int	i;
	int	j;

	i = 0;
	while (++i < size_pos[0] + 1)
	{
		j = 0;
		while (++j < size_pos[1] + 1)
		{
			if (map[i - 1][j - 1] == symbols[1])
				dp[i][j] = 0;
			else
			{
				dp[i][j] = ft_min(dp, i, j) + 1;
				if (size_pos[4] < dp[i][j])
				{
					size_pos[4] = dp[i][j];
					size_pos[2] = i;
					size_pos[3] = j;
				}
			}
		}
	}
}

int	solve_map_print(char **map, char *symbols, int height, int width)
{
	int	**dp;
	int	size_pos[5];

	size_pos[0] = height;
	size_pos[1] = width;
	size_pos[2] = 0;
	size_pos[3] = 0;
	size_pos[4] = -1;
	dp = make_dp(size_pos[0], size_pos[1]);
	if (!dp)
		return (0);
	solver(map, symbols, dp, size_pos);
	print_result(map, symbols, size_pos);
	free_2d_dp(dp, size_pos[0]);
	return (1);
}
