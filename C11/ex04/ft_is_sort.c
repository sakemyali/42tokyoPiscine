/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura < mosakura@student.42tokyo.jp     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 06:15:32 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/25 06:22:58 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// int        ft_intcmp(int a, int b)
// {
//     return (a - b);
// }

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

    i = 0;

    while (i < length - 1)
    {
        if ((*f)(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;
    }
	return (1);
}

// int        main(void)
// {
//     int	tab1[3] = {1, 3, 2};
//     int	tab2[3] = {1, 2, 3};
//     int            length = 3;

//     printf("Is 'tab1' in order? %d\n", ft_is_sort(tab1, length, &ft_intcmp));
//     printf("Is 'tab2' in order? %d\n", ft_is_sort(tab2, length, &ft_intcmp));
// }
