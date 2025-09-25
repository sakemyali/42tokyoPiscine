/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 12:56:44 by tkono             #+#    #+#             */
/*   Updated: 2025/09/14 18:21:40 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_overlap(int r, int c, int **board, int num);
int		check_board(int **board, int **clue_array);
void	set_next_rc(int r, int c, int *next_r, int *next_c);

int	solve(int r, int c, int **clue_array, int **board)
{
	int	num;
	int	next_r;
	int	next_c;

	if (r == 4)
		return (check_board(board, clue_array));
	num = 1;
	set_next_rc(r, c, &next_r, &next_c);
	while (num <= 4)
	{
		if (check_overlap(r, c, board, num) == 1)
		{
			++num;
			continue ;
		}
		board[r][c] = num;
		if (solve(next_r, next_c, clue_array, board) == 1)
			return (1);
		++num;
	}
	return (0);
}
