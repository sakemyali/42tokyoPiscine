/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:00:25 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/22 19:30:58 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
// 	char *test1 = "ABCUIIUopuhpuig";
// 	char *test2 = "ABhreaheaherah";

// 	printf("%d\n", ft_strncmp(test1, test2, 3));
// 	return 0;
// }
