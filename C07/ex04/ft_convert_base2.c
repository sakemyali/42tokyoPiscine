/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:49:10 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/20 21:07:54 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	digit_place(int nbr, char *base, int i)
{
	int		size;
	long	n;

	size = ft_strlen(base);
	n = nbr;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= size)
	{
		n /= size;
		i++;
	}
	i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, char *converted)
{
	long	n;
	int		size;
	int		f;
	int		l;

	size = ft_strlen(base);
	l = digit_place(nbr, base, 0);
	n = nbr;
	f = 0;
	if (n < 0)
	{
		converted[0] = '-';
		n *= -1;
		f++;
	}
	l--;
	while (n >= size)
	{
		converted[l] = base[n % size];
		n = n / size;
		l--;
	}
	if (n < size)
		converted[f] = base[n];
}
