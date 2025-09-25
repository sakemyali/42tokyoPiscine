/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 23:18:30 by tkono             #+#    #+#             */
/*   Updated: 2025/09/24 23:18:32 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	where_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str, char *end)
{
	int	len;
	int	end_len;

	len = 0;
	end_len = 0;
	while (end[end_len] != '\0')
		++end_len;
	if (end_len == 0)
	{
		while (str[len] != '\0')
			len++;
	}
	else
	{
		while (where_in_base(str[len], end) == -1)
			len++;
	}
	return (len);
}

int	count_words_split(char *str, char *charset)
{
	int		i;
	int		sep_n;
	int		str_len;
	char	prev;

	if (*charset == '\0')
		return (1);
	i = 0;
	str_len = ft_strlen(str, "");
	prev = charset[0];
	sep_n = 0;
	while (i < str_len)
	{
		if (where_in_base(str[i], charset) == -1
			&& where_in_base(prev, charset) != -1)
			++sep_n;
		prev = str[i];
		++i;
	}
	return (sep_n);
}

char	*create_split_string(char *str, char *charset)
{
	int		str_len;
	int		i;
	char	*ptr;

	str_len = ft_strlen(str, charset);
	ptr = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < str_len)
	{
		ptr[i] = str[i];
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		sep_n;
	char	**re;
	char	prev;

	sep_n = count_words_split(str, charset);
	re = (char **)malloc(sizeof(char *) * (sep_n + 1));
	if (!re)
		return (NULL);
	re[sep_n] = NULL;
	if (*charset == '\0')
	{
		re[0] = create_split_string(str, charset);
		return (re);
	}
	prev = charset[0];
	i = 0;
	while (*str != '\0')
	{
		if (where_in_base(*str, charset) == -1
			&& where_in_base(prev, charset) != -1)
			re[i++] = create_split_string(str, charset);
		prev = *(str++);
	}
	return (re);
}
