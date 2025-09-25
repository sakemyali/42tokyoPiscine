/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:55:45 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 12:55:45 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include "ft_trie.h"

char	*ft_lstrip(char *str, char *sep);
void	split_orders(char *str, int size, char **high, char **low);
char	*join(t_trie *trie, char **words);

#endif
