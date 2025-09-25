/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:25:28 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/20 15:25:28 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "ft_checks.h"
#include "ft_file.h"
#include "ft_free.h"
#include "ft_output.h"
#include "ft_trie.h"
#include "ft_trie_ops.h"
#include "ft_string.h"
#include "ft_utils.h"

char	*ft_convert(t_trie *trie, char *str);

int	check_high_orders(t_trie *trie, char *num, char **words)
{
	char	*rounded;
	char	*high;
	char	*low;
	int		cnt;
	int		step;

	rounded = get_highest_order(trie, &step);
	while (ft_strlen(rounded) > step)
	{
		cnt = ft_strlen(rounded) - 1;
		if (ft_strlen(num) > cnt)
		{
			split_orders(num, cnt, &high, &low);
			if (*high)
				*words++ = ft_convert(trie, high);
			*words++ = ft_strdup(trie_search(trie, rounded));
			if (*low && *low != '0')
				*words++ = ft_convert(trie, low);
			free_triplet(rounded, high, low);
			return (1);
		}
		rounded[ft_strlen(rounded) - step] = 0;
	}
	free(rounded);
	return (0);
}

void	check_low_orders(t_trie *trie, char *num, char **words)
{
	char	*rounded;
	char	*tr;

	while (*words != NULL)
		words++;
	rounded = ft_strdup("10000");
	rounded[ft_strlen(num)] = 0;
	rounded[0] = *num++;
	if (rounded[0] != '1' && trie_search(trie, rounded))
		*words++ = ft_strdup(trie_search(trie, rounded));
	else
	{
		rounded[1] = 0;
		tr = trie_search(trie, rounded);
		if (tr && *tr != '0')
		{
			*words++ = ft_strdup(tr);
			rounded[0] = '1';
			rounded[1] = '0';
			*words++ = ft_strdup(trie_search(trie, rounded));
		}
	}
	if (ft_strlen(ft_lstrip(num, "0")))
		*words++ = ft_convert(trie, num);
	free(rounded);
}

char	*ft_convert(t_trie *trie, char *str)
{
	char	**words;
	char	*tr;
	int		i;
	int		l;

	str = ft_lstrip(str, "0");
	l = ft_strlen(str);
	if (l == 0)
		return (ft_strdup(trie_search(trie, "0")));
	tr = trie_search(trie, str);
	if (tr && l < 3)
		return (ft_strdup(tr));
	words = malloc(BUFFER_SIZE * sizeof(char *));
	i = 0;
	while (i < BUFFER_SIZE)
		words[i++] = NULL;
	if (l == 2 || l == 3 || (trie_search(trie, "10000") && l == 4))
	{
		check_low_orders(trie, str, words);
		return (join(trie, words));
	}
	if (check_high_orders(trie, str, words))
		return (join(trie, words));
	free_words(words);
	return (ft_strdup(""));
}

int	main(int argc, char *argv[])
{
	t_trie	*trie;
	char	*fname;
	char	*num;
	char	*res;

	fname = DEFAULT_DICT;
	num = "";
	if (check_input(argc, argv, &fname, &num))
		return (print_error("Error\n", 1));
	trie = trie_init();
	if (load_trie(trie, fname) || check_overflow(trie, num))
	{
		trie_destroy(trie);
		return (print_error("Dict Error\n", 1));
	}
	res = ft_convert(trie, num);
	print_message(res, 1);
	trie_destroy(trie);
	free(res);
}
