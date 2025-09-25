/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:27:22 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 16:49:01 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if ('A' <= str[i] && str[i] <= 'Z')
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
// 	char str[] = "geheAwh";
// 	res = ft_str_is_uppercase(str);
// 	printf("%d\n", res);
// 	return 0;
// }
