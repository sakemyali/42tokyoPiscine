/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 17:08:13 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 17:08:14 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "ft_string.h"

void	free_triplet(void *first, void *second, void *third)
{
	if (first)
		free(first);
	if (second)
		free(second);
	if (third)
		free(third);
}

void	free_words(char **words)
{
	int	i;

	i = 0;
	while (i < BUFFER_SIZE)
	{
		if (words[i])
			free(words[i]);
		i++;
	}
	free(words);
}
