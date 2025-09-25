/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:59:11 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/11 21:42:33 by mosakura         ###   ########.fr       */
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
		if (i == 1 || i == y)
			print_line(x, 'o', '-');
		else
			print_line(x, '|', ' ');
		i++;
	}
}
