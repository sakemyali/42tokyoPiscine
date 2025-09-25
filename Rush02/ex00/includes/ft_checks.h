/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:12:59 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 20:12:59 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKS_H
# define FT_CHECKS_H

# include "ft_trie.h"

int	check_input(int argc, char *argv[], char **fname, char **num);
int	check_output(char *str);
int	check_overflow(t_trie *trie, char *num);

#endif
