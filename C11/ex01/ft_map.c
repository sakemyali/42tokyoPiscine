/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura < mosakura@student.42tokyo.jp     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 06:14:16 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/25 06:20:46 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_square(int n)
// {
// 	return (n * n);
// }

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*squared_tab;

	squared_tab = (int *)malloc(sizeof(int) * length);
	if (squared_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		squared_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (squared_tab);
}

// int main (void)
// {
// 	int	i;
// 	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int length = 10;
// 	int *squared_tab;

// 	squared_tab = ft_map(tab, length, &squared_tab);
// 	i = 0;
// 	while ( i < length)
// 	{
// 		printf( "%d\n", squared_tab[i]);
// 		i++;
// 	}
// }
