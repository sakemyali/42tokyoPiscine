/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:59:16 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/16 17:43:45 by mosakura         ###   ########.fr       */
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

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
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
	if (base_size == 0)
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

// #include <stdio.h>

// int main()
// {
// 	char *str = "      ----+++---000000010a161f";
// 	char *base = "0123456789ABCDEF";
// 	printf( "%d\n", ft_atoi_base(str, base));
// 	return 0;
// }
