/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:34:13 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/20 22:36:11 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	current;

	current = 0;
	while (*str)
	{
		str++;
		current++;
	}
	return (current);
}

char	*len_len(int size, char **twodstr, char *separation)
{
	int		i;
	int		sum;
	char	*all;

	sum = 0;
	i = 0;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(twodstr[i]);
			i++;
		}
		sum += ft_strlen(separation) * size - 1;
	}
	all = (char *) malloc(sizeof(char) * sum);
	if (all == NULL)
		return (0);
	return (all);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*all;

	all = len_len(size, strs, sep);
	i = 0;
	c = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			all[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] && i != size -1)
		{
			all[c++] = sep[j++];
		}
		i++;
	}
	all[c] = '\0';
	return (all);
}

// #include <stdio.h>

// int main()
// {
// 	char *twodstr[] = {"Hello", "World", "!!!"};
// 	int size = 3;
// 	char *separation = " ";
// 	int i = 0;
// 	char *res = ft_strjoin(size, twodstr, separation);

// 	while (i < size)
// 	{
// 		printf("%d\n", i);
// 		printf("%s\n", twodstr[i]);
// 		i++;
// 	}
// 	printf("%s\n", res);
// 	return 0;
// }
