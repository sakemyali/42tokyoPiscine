/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:11:08 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/07 15:43:06 by kmurugan         ###   ########.fr       */
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
		if (i == 1)
			print_line(x, '/', '*', '\\');
		else if (i == y)
			print_line(x, '\\', '*', '/');
		else
			print_line(x, '*', ' ', '*');
		i++;
	}
}
