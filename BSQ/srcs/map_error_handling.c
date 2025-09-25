/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_error_handling.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:56:11 by tkono             #+#    #+#             */
/*   Updated: 2025/09/24 23:19:21 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_put_map_error(void)
{
	write(1, "map error\n", 10);
}

int	count_lines_no_header(char **map)
{
	int	count;

	count = 0;
	while (map[count])
		++count;
	return (count - 1);
}

int	is_valid_line(char *line, char *symbols)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (!is_in_symbols(line[i], symbols))
			return (0);
		++i;
	}
	return (1);
}

int	map_error_check(char **map, char *symbols, int *size)
{
	int	i;

	if (size[0] != count_lines_no_header(map))
	{
		ft_put_map_error();
		return (1);
	}
	size[1] = ft_strlen(map[1], "");
	if (size[1] < 1)
	{
		ft_put_map_error();
		return (1);
	}
	i = 1;
	while (i < size[0] + 1)
	{
		if ((ft_strlen(map[i], "") != size[1])
			|| !is_valid_line(map[i], symbols))
		{
			ft_put_map_error();
			return (1);
		}
		++i;
	}
	return (0);
}

int	is_valid_map_all(char **map, char *symbols, int *size)
{
	if (map_header_parser(map[0], symbols, size))
		return (0);
	if (map_error_check(map, symbols, size))
		return (0);
	return (1);
}
