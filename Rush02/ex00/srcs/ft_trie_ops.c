/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trie_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:51:37 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/20 15:51:38 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_trie.h"
#include "ft_string.h"

#define CHILDREN_SIZE 10

t_trie	*trie_init(void)
{
	t_trie	*trie;
	int		i;

	trie = malloc(sizeof(t_trie));
	if (!trie)
		return (NULL);
	trie->value = NULL;
	trie->children = malloc(CHILDREN_SIZE * sizeof(t_trie *));
	if (!trie->children)
	{
		free(trie);
		return (NULL);
	}
	i = 0;
	while (i < CHILDREN_SIZE)
		trie->children[i++] = NULL;
	return (trie);
}

void	trie_destroy(t_trie *trie)
{
	int	i;

	if (!trie)
		return ;
	if (trie->children)
	{
		i = 0;
		while (i < CHILDREN_SIZE)
			trie_destroy(trie->children[i++]);
		free(trie->children);
	}
	if (trie->value)
		free(trie->value);
	free(trie);
}

void	trie_insert(t_trie *trie, char *key, char *value)
{
	int	i;

	while (*key)
	{
		i = *key - '0';
		if (trie->children[i] == NULL)
			trie->children[i] = trie_init();
		trie = trie->children[i];
		key++;
	}
	trie->value = ft_strdup(value);
}

char	*trie_search(t_trie *trie, char *key)
{
	int	i;

	while (*key)
	{
		i = *key - '0';
		if (trie->children[i] == NULL)
			return (NULL);
		trie = trie->children[i];
		key++;
	}
	return (trie->value);
}

char	*get_highest_order(t_trie *trie, int *step)
{
	char	*key;
	int		i;

	*step = 3;
	if (trie_search(trie, "10000"))
		*step += 1;
	key = malloc(BUFFER_SIZE * sizeof(char));
	i = 0;
	while (i < BUFFER_SIZE - 1)
		key[i++] = '0';
	key[0] = '1';
	key[i--] = 0;
	while (i > 0 && !trie_search(trie, key))
		key[i--] = 0;
	return (key);
}
