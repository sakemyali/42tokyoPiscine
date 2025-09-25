/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:11:17 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/07 15:43:29 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char first, char mid, char last)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (x == 1 || i == 1)
			ft_putchar(first);
		else if (i == x && x != 1)
			ft_putchar(last);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
	{
		return ;
	}
	while (i <= y)
	{
		if (i == 1 || i == y)
			print_line(x, 'A', 'B', 'C');
		else
			print_line(x, 'B', ' ', 'B');
		i++;
	}
}
