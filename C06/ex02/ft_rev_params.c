/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 22:43:38 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/17 18:04:13 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		len;
	char	c;

	len = argc - 1;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[len][j])
		{
			c = argv[len][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		len--;
	}
	return (0);
}
