/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:05:50 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/08 16:10:03 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	current;

	current = 0;
	while (*str)
	{
		str++;
		current++;
	}
	return (current);
}

// int	main(){
// 	char *str = "Hello World";
// 	int res;
// 	res = ft_strlen(str);
// 	printf("%d", res);
// 	return 0;
// }
