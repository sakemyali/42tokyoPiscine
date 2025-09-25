/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:21:02 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 13:21:02 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_free.h"
#include "ft_trie.h"
#include "ft_trie_ops.h"
#include "ft_string.h"

char	*ft_lstrip(char *str, char *sep)
{
	while (*str && find_char(*str, sep) != -1)
		str++;
	return (str);
}

char	*get_high_order(char *num, int size)
{
	char	*res;
	int		i;
	int		l;

	num = ft_lstrip(num, "0");
	l = ft_strlen(num);
	if (l <= size)
		return (ft_strdup("0"));
	res = malloc((l - size + 1) * sizeof(char));
	i = 0;
	while (i < (l - size))
		res[i++] = *num++;
	res[i] = 0;
	return (res);
}

char	*get_low_order(char *num, int size)
{
	char	*res;
	int		i;
	int		l;

	while (ft_strlen(num) > size)
		num++;
	num = ft_lstrip(num, "0");
	l = ft_strlen(num);
	if (l == 0)
		return (ft_strdup("0"));
	res = malloc((l + 1) * sizeof(char));
	i = 0;
	while (i < l)
		res[i++] = *num++;
	res[i] = 0;
	return (res);
}

void	split_orders(char *str, int size, char **high, char **low)
{
	*high = get_high_order(str, size);
	*low = get_low_order(str, size);
}

char	*join(t_trie *trie, char **words)
{
	char	**ptr;
	char	*res;
	char	*sep;
	int		size;

	size = 0;
	ptr = words;
	while (*ptr)
	{
		size++;
		ptr++;
	}
	sep = " ";
	if (trie_search(trie, "10000"))
		sep = "";
	res = ft_strjoin(size, words, sep);
	free_words(words);
	return (res);
}
