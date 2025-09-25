/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:03:10 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 16:45:40 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (!(str[0]))
	{
		return (1);
	}
	while (res == 1 && str[i])
	{
		if (('a' <= str[i] && str[i] <= 'z')
			|| ('A' <= str[i] && str[i] <= 'Z'))
		{
			i++;
		}
		else
			res--;
	}
	return (res);
}

// int main(){
// 	int res;
// 	char str[] = "qiffqi124241\nugA";
// 	res = ft_str_is_alpha(str);
// 	printf("%d\n", res);
// 	return 0;
// }
