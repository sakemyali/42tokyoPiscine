/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 20:22:35 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/08 16:11:33 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int main() {
// 	int a = 1;
//  	int b = 2;
// 	ft_swap(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return 0;
// }
