/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header_error_handling.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 18:01:20 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/24 22:55:13 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_in_symbols(char c, char *symbols)
{
	if (c == symbols[0])
		return (1);
	if (c == symbols[1])
		return (1);
	return (0);
}

int	is_valid_symbols(char *symbols)
{
	if (!(32 <= symbols[0] && symbols[0] <= 126))
		return (0);
	if ('0' <= symbols[0] && symbols[0] <= '9')
		return (0);
	if (!(32 <= symbols[1] && symbols[1] <= 126))
		return (0);
	if (!(32 <= symbols[2] && symbols[2] <= 126))
		return (0);
	if (symbols[0] == symbols[1]
		|| symbols[0] == symbols[2] || symbols[1] == symbols[2])
		return (0);
	return (1);
}

int	is_valid_row_num(char *header)
{
	int	i;

	i = 0;
	while (header[i])
	{
		if (!('0' <= header[i] && header[i] <= '9'))
			return (0);
		++i;
	}
	return (1);
}

int	set_header_symbols(char *symbols, char *header)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(header, "");
	if (len < 4)
		return (1);
	symbols[0] = header[len - 3];
	symbols[1] = header[len - 2];
	symbols[2] = header[len - 1];
	symbols[3] = '\0';
	header[len - 3] = '\0';
	return (0);
}

int	map_header_parser(char *header, char *symbols, int *size)
{
	if (!header)
	{
		ft_put_map_error();
		return (1);
	}
	if (set_header_symbols(symbols, header))
	{
		ft_put_map_error();
		return (1);
	}
	if (!is_valid_symbols(symbols) || !is_valid_row_num(header))
	{
		ft_put_map_error();
		return (1);
	}
	size[0] = ft_atoi(ft_strdup(header));
	if (size[0] == 0 || size[0] == -1)
	{
		ft_put_map_error();
		return (1);
	}
	return (0);
}
