/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:35:00 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/20 22:36:57 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	separated(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!separated(str[i], sep))
		{
			words++;
			while (str[i] && !separated(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*splitter(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !separated(str[i], sep))
		i++;
	word = (char *)malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !separated(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**res;

	i = 0;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (res == NULL || str == NULL || charset == NULL)
		return (NULL);
	while (str[i])
	{
		if (!separated(str[i], charset))
		{
			res[j] = splitter(&str[i], charset);
			while (str[i] && !separated(str[i], charset))
				i++;
			j++;
		}
		else
			i++;
	}
	res[j] = 0;
	return (res);
}

// #include <stdio.h>

// int main()
// {
// 	char *str = "Hello my name is ali!!";
// 	char *sep = " ";

// 	char **res = ft_split(str, sep);
// 	int i = 0;
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// 	return 0;
// }
