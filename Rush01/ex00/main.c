/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:21:49 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/14 18:20:21 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		error_handling(int argc, char **argv);
int		**clue_create_n(int n, char **values);
int		**create_board(void);
int		solve(int r, int c, int **clue_array, int **board);
void	print_board(int	**board, int n);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	**clue_array;
	int	**board;

	if (error_handling(argc, argv))
		return (1);
	clue_array = clue_create_n(4, argv);
	board = create_board();
	if (solve(0, 0, clue_array, board))
	{
		print_board(board, 4);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
