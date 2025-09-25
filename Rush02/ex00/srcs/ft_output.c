/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:22:05 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 20:22:06 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

void	print_message(char *str, int new_line)
{
	print(str, STDOUT_FILENO);
	if (new_line)
		print("\n", STDOUT_FILENO);
}

int	print_error(char *str, int code)
{
	print(str, STDERR_FILENO);
	return (code);
}
