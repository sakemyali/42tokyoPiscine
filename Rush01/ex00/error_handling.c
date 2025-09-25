/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 17:22:20 by mosakura          #+#    #+#             */
/*   Updated: 2025/09/16 17:02:57 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	count_words(char *string)
{
	int	len;

	len = 0;
	while (string[len])
		++len;
	return (len);
}

int	check_argv_is_valid(char **argv)
{
	int		i;
	char	value;

	i = 0;
	while (i < 31)
	{
		value = argv[1][i];
		if (i % 2 == 0)
		{
			if ('1' > value && value > '4')
				return (0);
		}
		if (i % 2 == 1)
		{
			if (value != ' ')
				return (0);
		}
		++i;
	}
	return (1);
}

int	error_handling(int argc, char **argv)
{
	int	count_word_n;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	count_word_n = count_words(argv[1]);
	if (count_word_n != 31)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (!check_argv_is_valid(argv))
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
