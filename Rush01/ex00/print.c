/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:50:42 by tnikitin          #+#    #+#             */
/*   Updated: 2025/09/14 18:20:20 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_board(int	**board, int n)
{
	int	r;
	int	c;

	r = 0;
	while (r < n)
	{
		c = 0;
		while (c < n)
		{
			ft_putchar(board[r][c] + '0');
			if (c != n - 1)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			++c;
		}
		++r;
	}
}
