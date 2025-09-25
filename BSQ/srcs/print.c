/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 00:11:20 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/24 22:22:34 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_result(char **map, char *symbols, int size_pos[5])
{
	int	i;
	int	j;

	i = 0;
	while (++i < size_pos[0] + 1)
	{
		j = 0;
		while (++j < size_pos[1] + 1)
		{
			if ((size_pos[2] - size_pos[4] + 1 <= i && i <= size_pos[2])
				&& (size_pos[3] - size_pos[4] + 1 <= j && j <= size_pos[3]))
				write(1, &symbols[2], 1);
			else
				write(1, &map[i - 1][j - 1], 1);
		}
		write(1, "\n", 1);
	}
}

void	print_new_line_if_not_end(int argc, int i)
{
	if (i != argc - 1)
		write(1, "\n", 1);
}

void	solve_maps_print(int argc, char *argv[])
{
	char	*buf;
	char	**map;
	char	symbols[4];
	int		size[2];
	int		i;

	i = 0;
	while (++i < argc)
	{
		buf = read_file_all(argv[i]);
		if (!is_valid_file(buf, argc, i))
			continue ;
		map = ft_split(buf, "\n");
		free(buf);
		if (!is_valid_map_all(map, symbols, size))
		{
			free_2d_map_nullterm(map);
			print_new_line_if_not_end(argc, i);
			continue ;
		}
		solve_map_print(&map[1], symbols, size[0], size[1]);
		print_new_line_if_not_end(argc, i);
		free_2d_map(map, size[0] + 1);
	}
}

void	solve_map_print_std(void)
{
	char	*buf;
	char	**map;
	char	symbols[4];
	int		size[2];

	buf = read_file_std_all();
	if (!buf)
	{
		ft_put_map_error();
		return ;
	}
	map = ft_split(buf, "\n");
	free(buf);
	if (!is_valid_map_all(map, symbols, size))
		return ;
	solve_map_print(&map[1], symbols, size[0], size[1]);
	free_2d_map(map, size[0] + 1);
}
