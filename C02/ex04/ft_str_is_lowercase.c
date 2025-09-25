/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:21:44 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 16:48:14 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if ('a' <= str[i] && str[i] <= 'z')
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
// 	char str[] = " ";
// 	res = ft_str_is_lowercase(str);
// 	printf("%d\n", res);
// 	return 0;
// }
