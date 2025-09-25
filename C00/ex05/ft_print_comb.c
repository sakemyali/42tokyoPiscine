/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 22:47:38 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/04 22:11:38 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	array[4];

	array[0] = '0';
	while (array[0] <= '7')
	{
		array[1] = array[0] + 1;
		while (array[1] <= '8')
		{
			array[2] = array[1] + 1;
			while (array[2] <= '9')
			{
				ft_putchar(array[0]);
				ft_putchar(array[1]);
				ft_putchar(array[2]);
				if (!(array[0] == '7' && array[1] == '8' && array[2] == '9'))
					write(1, ", ", 2);
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
}
// int main()
// {
// 	ft_print_comb();
// 	return 0;
// }
