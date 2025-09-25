/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:00:23 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/17 15:13:08 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int main()
// {
// 	char *test1 = "khbgeraougeq";
// 	char *test2 = "gWIUGuovfewura";

// 	printf("%d\n", ft_strcmp(test1, test2));
// 	return 0;
// }
