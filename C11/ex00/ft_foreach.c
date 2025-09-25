/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura < mosakura@student.42tokyo.jp     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 06:13:35 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/25 06:25:22 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	long int	n;

// 	n = nb;

// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n *= -1;
// 	}
// 	if (n >= 0 && n <= 9)
// 		ft_putchar(n + '0');
// 	if (n > 9)
// 	{
// 		ft_putnbr(n / 10);
// 		ft_putnbr(n % 10);
// 	}
// }


void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main (void)
// {
// 	int	tab[10] = {50, -63, 25, 998, 4965, -981, 0, 7, 25881, 6};

//     ft_foreach(tab, 10, &ft_putnbr);
// }
