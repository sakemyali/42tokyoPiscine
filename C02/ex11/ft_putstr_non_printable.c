/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:47:26 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 16:52:35 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	char_to_hex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar(hex_digits[c / 16]);
	ft_putchar(hex_digits[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			char_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char *str = "Hello\nHow are you";
// 	ft_putstr_non_printable(str);
// }
