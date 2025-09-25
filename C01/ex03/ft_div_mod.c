/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:16:12 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/08 16:11:35 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main() {
// 	int a = 1;
//  	int b = 2;
// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d\n", a);
// 	printf("%d\n", b);
// 	printf("%d\n", div);
// 	printf("%d\n", mod);
// 	return 0;
// }
