/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura < mosakura@student.42tokyo.jp     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 06:15:19 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/25 06:21:57 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

// int ft_comparison(char *str)
// {
//     int i;

//     i = 0;
//     while (str[i])
//     {
//         if (str[i] == 'A')
//             return (1);
//         i++;
//     }
// 	return (0);
// }

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char **strs;
// 	int	i;

// 	i = 0;
// 	strs = (char **)malloc(sizeof(char *) * 3);
// 	strs[0] = "testarray";
// 	strs[1] = "testarrAy";
// 	strs[2] = NULL;
// 	if (ft_any(strs, &ft_comparison))
// 		printf("The char 'A' was founded\n");
// 	else
// 		printf("The char 'A' wasn't founded\n");
//     free(strs);
// }
