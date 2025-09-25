/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:57:11 by tkono             #+#    #+#             */
/*   Updated: 2025/09/14 18:20:18 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	make_column(int **board, int *column, int j)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		column[i] = board[i][j];
		++i;
	}
}

void	set_next_rc(int r, int c, int *next_r, int *next_c)
{
	if (c == 3)
		*next_r = r + 1;
	else
		*next_r = r;
	if (c == 3)
		*next_c = 0;
	else
		*next_c = c + 1;
}
