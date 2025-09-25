/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 22:41:31 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/20 22:58:34 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int		i;
	char	c;

	i = 0;
	while (argv[0][i] && argc)
	{
		c = argv[0][i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
