/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:25:03 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/08 16:12:46 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	remainder;
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	division = tempa / tempb;
	remainder = tempa % tempb;
	*a = division;
	*b = remainder;
}
// int main() {
// 	int a = 1;
//  	int b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	return 0;
// }
