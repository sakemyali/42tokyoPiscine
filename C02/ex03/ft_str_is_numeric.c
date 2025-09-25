/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:19:01 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 16:46:57 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
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
		if ('0' <= str[i] && str[i] <= '9')
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
// 	res = ft_str_is_numeric(str);
// 	printf("%d\n", res);
// 	return 0;
// }
