/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 18:00:44 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/17 14:32:11 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, --power));
}

// #include <stdio.h>

// int main()
// {
// 	int n = 0;
// 	int power = 0;
// 	printf("%d\n", ft_recursive_power(n, power));
// 	return 0;
// }
