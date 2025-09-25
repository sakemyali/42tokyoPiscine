/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:34:32 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/24 14:17:07 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		digit_place(int nbr, char *base, int i);
void	ft_putnbr_base(int nbr, char *base, char *converted);

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	base_match(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	pre_digits(char *str, int *ptr_sign)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_sign = sign;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	int		sum;
	int		current;
	int		base_size;

	sum = 0;
	sign = 1;
	base_size = check_base(base);
	if (base_size == 0 || base_size == 1)
		return (0);
	i = pre_digits(str, &sign);
	current = base_match(str[i], base);
	while (current != -1)
	{
		sum = (sum * base_size) + current;
		i++;
		current = base_match(str[i], base);
	}
	return (sign * sum);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		decimal;
	int		i;

	if (check_base(base_to) == 0 || check_base(base_from) == 0)
		return (0);
	decimal = ft_atoi_base(nbr, base_from);
	i = digit_place(decimal, base_to, 0);
	converted = (char *)malloc(sizeof(char) * (i + 1));
	if (converted == NULL)
		return (0);
	ft_putnbr_base(decimal, base_to, converted);
	converted[i] = '\0';
	return (converted);
}

#include <stdio.h>

int main()
{
	char *base10 = "0123456789";
	char *base2 = "01";
	char *nbr = "-123";

	char *str = ft_convert_base(nbr, base10, base2);
	printf("%s\n", str);
	return 0;
}
