/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:33:32 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/18 20:06:45 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc(sizeof (int) * ((max - min) + 1));
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		*range = arr;
		return (i);
	}
	else
		return (-1);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int min = 5;
// 	int max = 10;
// 	int i = 0;
// 	int *arr;

// 	int size = ft_ultimate_range(&arr, min, max);
// 	while (arr[i])
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	printf("%d\n", size);
// 	return 0;
// }
