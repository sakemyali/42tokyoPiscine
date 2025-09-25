/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:13:42 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 15:13:43 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include "ft_trie.h"

# define DEFAULT_DICT "./english.dict"

int	load_trie(t_trie *trie, char *fname);

#endif
