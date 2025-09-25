/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:57:26 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/05 21:29:53 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write2(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			write2(a);
			ft_putchar(' ');
			write2(b);
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_combo2();
// 	return (0);
// }
