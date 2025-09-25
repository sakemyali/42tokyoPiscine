/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:11:13 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/07 15:43:18 by kmurugan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char edge, char mid)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == x || i == 1)
			ft_putchar(edge);
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
		if (i == 1)
			print_line(x, 'A', 'B');
		else if (i == y)
			print_line(x, 'C', 'B');
		else
			print_line(x, 'B', ' ');
		i++;
	}
}
