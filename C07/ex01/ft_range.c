/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:33:16 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/18 16:00:03 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int min = 5;
// 	int max = 10;
// 	int i = 0;
// 	int *arr = ft_range(min, max);
// 	while (arr[i])
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	return 0;
// }
