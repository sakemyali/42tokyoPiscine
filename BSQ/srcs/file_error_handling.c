/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_error_handling.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:05:59 by tkono             #+#    #+#             */
/*   Updated: 2025/09/24 23:19:05 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_valid_file(char *buf, int argc, int i)
{
	if (!buf)
	{
		ft_put_map_error();
		print_new_line_if_not_end(argc, i);
		return (0);
	}
	return (1);
}
