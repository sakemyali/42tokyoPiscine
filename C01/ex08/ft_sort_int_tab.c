/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:53:33 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/08 16:11:11 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	partition(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	j = low;
	pivot = tab[high];
	i = low - 1;
	while (j <= high - 1)
	{
		if (tab[j] < pivot)
		{
			i++;
			swap(&tab[i], &tab[j]);
		}
		j++;
	}
	swap(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void	sort(int *tab, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(tab, low, high);
		sort(tab, low, pi - 1);
		sort(tab, pi + 1, high);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	low;
	int	high;

	high = size - 1;
	low = 0;
	sort(tab, low, high);
}

// int main()
// {
// 	int arr[] = {15, 9, 2, 6, 5, 12, 1, 3, 13, 8, 4};
// 	int size = 11;

// 	ft_sort_int_tab(arr, size);
// 	for (int i = 0; i < size; i++) {
// 		printf("%d ", arr[i]);
// 	}

// 	return 0;
// }
