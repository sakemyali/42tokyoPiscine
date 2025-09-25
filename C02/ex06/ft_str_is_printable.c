/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:28:20 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 17:57:31 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (' ' <= str[i] && str[i] <= '~')
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
// 	char str[] = "";
// 	res = ft_str_is_printable(str);
// 	printf("%d\n", res);
// 	return 0;
// }
