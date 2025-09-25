/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:47:22 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 21:36:09 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	char_to_hex(unsigned long long n, int check)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n < 16 && check == 1)
		ft_putchar('0');
	if (n >= 16)
	{
		char_to_hex(n / 16, 0);
		char_to_hex(n % 16, 0);
	}
	else
		ft_putchar(hex_digits[n]);
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	tmp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0');
		tmp /= 16;
	}
	char_to_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ');
		if (i < size)
		{
			char_to_hex((unsigned long long)*(c + i), 1);
		}
		else if (i != 16)
		{
			write(1, "  ", 2);
		}
	}
	i = -1;
	while (i++ < size - 1)
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.');
		else
			ft_putchar(*(c + i));
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	columns;

	i = 0;
	while (i * 16 < size)
	{
		if (i < size / 16)
			columns = 16;
		else
			columns = size % 16;
		ft_print_addr((unsigned long long)addr + (i * 16));
		ft_putchar(':');
		ft_print_data(addr + (i * 16), columns);
		ft_putchar('\n');
		i++;
	}
	return (addr);
}

// int main()
// {
// 	char *str = "Hello waorkfajn feaojngae .af ea \n  \n \na\a aoinev\nn";
// 	int	i = 0;

// 	while (str[i])
// 		i++;
// 	ft_print_memory(str, i);
// 	printf("%p\n", &str[0]);
// }
