/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:00:35 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/15 22:35:54 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;
	unsigned int	res;

	i = 0;
	while (dest[i])
		i++;
	s = 0;
	while (src[s])
		s++;
	if (size > i)
		res = s + i;
	else
		res = s + size;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

// #include <stdio.h>

// int main()
// {
// 	char str1[10] = "Hello ";
// 	char str2[12] = "World!";
// 	int res = ft_strlcat(str1, str2, 10);
// 	printf("%s\n", str1);
// 	printf("%d\n", res);
// }
