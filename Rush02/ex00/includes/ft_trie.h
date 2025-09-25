/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trie.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:02:45 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/20 15:02:46 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TRIE_H
# define FT_TRIE_H

typedef struct s_trie
{
	char			*value;
	struct s_trie	**children;
}	t_trie;

#endif
