/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trie_ops.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:48:23 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/20 15:48:24 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TRIE_OPS_H
# define FT_TRIE_OPS_H

# include "ft_trie.h"

t_trie	*trie_init(void);
void	trie_destroy(t_trie *trie);
void	trie_insert(t_trie *trie, char *key, char *value);
char	*trie_search(t_trie *trie, char *key);
char	*get_highest_order(t_trie *trie, int *step);

#endif
