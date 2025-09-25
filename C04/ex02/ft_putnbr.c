/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:59:10 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/16 16:16:26 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnbrchar(long n)
{
	if (n >= 10)
	{
		printnbrchar(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		printnbrchar(n * -1);
	}
	else
	{
		printnbrchar(n);
	}
}

// int	main(){
// 	ft_putnbr(2147483647);
// 	return 0;
// }
