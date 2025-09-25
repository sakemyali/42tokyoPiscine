/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:13:13 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 20:13:14 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "ft_output.h"
#include "ft_string.h"
#include "ft_trie.h"
#include "ft_trie_ops.h"

int	check_input(int argc, char *argv[], char **fname, char **num)
{
	char	*ptr;

	if (argc == 2)
		*num = argv[1];
	else if (argc == 3)
	{
		*fname = argv[1];
		*num = argv[2];
	}
	ptr = *num;
	if (!ft_strlen(ptr))
		return (1);
	while (*ptr && find_char(*ptr, "0123456789") != -1)
		ptr++;
	if (ft_strlen(ptr))
		return (1);
	return (0);
}

int	check_output(char *str)
{
	if (!ft_strlen(str))
		return (print_error("Dict Error\n", 1));
	return (0);
}

int	check_overflow(t_trie *trie, char *num)
{
	char	*max;
	int		m;
	int		l;

	max = get_highest_order(trie, &l);
	m = ft_strlen(max);
	l = ft_strlen(num);
	free(max);
	if (m + 2 < l || (trie_search(trie, "10000") && m + 3 < l))
		return (1);
	return (0);
}
