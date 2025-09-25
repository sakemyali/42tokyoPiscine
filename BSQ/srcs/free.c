/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 23:18:58 by tkono             #+#    #+#             */
/*   Updated: 2025/09/24 23:19:00 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_2d_map(char **map, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(map[i]);
		++i;
	}
	free(map);
}

void	free_2d_dp(int	**dp, int height)
{
	int	i;

	i = 0;
	while (i < (height + 1))
	{
		free(dp[i]);
		++i;
	}
	free(dp);
}

void	free_2d_map_nullterm(char **map)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}
