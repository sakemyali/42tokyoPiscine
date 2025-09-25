/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:12:24 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/08 16:10:35 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = size - 1;
	j = 0;
	while (i > j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j++;
		i--;
	}
}

// int	main(){
// 	int i = 0;
// 	int size = 9;
// 	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	ft_rev_int_tab(tab, size);
// 	while (i < size){
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// 	return 0;
// }
