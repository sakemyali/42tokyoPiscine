/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:02:27 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/17 14:32:32 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_solution(int *chessboard)
{
	int	i;

	i = 0;
	while (i < 10)
		ft_putchar(chessboard[i++] + '0');
	ft_putchar('\n');
}

int	possibilities(int *chessboard, int p)
{
	int	i;

	i = 0;
	while (i < p)
	{
		if (chessboard[i] == chessboard[p] && i != p)
			return (1);
		if (i != p)
		{
			if (chessboard[i] == chessboard[p] - (p - i)
				|| chessboard[i] == chessboard[p] + (p - i))
				return (1);
		}
		i++;
	}
	return (0);
}

void	recursive_puzzle(int chessboard[], int p, int *solutions)
{
	int	i;

	i = 0;
	if (p == 10)
	{
		print_solution(chessboard);
		(*solutions)++;
	}
	else
	{
		while (i <= 9)
		{
			chessboard[p] = i;
			if (!possibilities(chessboard, p))
				recursive_puzzle(chessboard, p + 1, solutions);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chessboard[10];
	int	solutions;

	solutions = 0;
	recursive_puzzle(chessboard, 0, &solutions);
	return (solutions);
}

// #include <stdio.h>

// int main()
// {
// 	printf("The number of possibilities: %d\n", ft_ten_queens_puzzle());
// 	return 0;
// }
