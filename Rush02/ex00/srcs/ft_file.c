/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:12:48 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/21 15:12:49 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#include "ft_trie.h"
#include "ft_trie_ops.h"
#include "ft_string.h"

void	init_buffers(char *buf, int size)
{
	while (size--)
		*buf++ = 0;
}

char	*ft_rstrip(char *str, char *sep)
{
	char	*cur;

	cur = str;
	while (*cur)
		cur++;
	cur--;
	while (*cur && find_char(*cur, sep) != -1)
		*cur-- = 0;
	return (str);
}

int	process_line(t_trie *trie, char *line)
{
	char	*num;
	char	*val;

	val = line;
	while (find_char(*val, " ") != -1)
		val++;
	if (!ft_strlen(val))
		return (1);
	num = val;
	while (find_char(*val, "0123456789") != -1)
		val++;
	while (find_char(*val, " ") != -1)
		val++;
	if (find_char(*val, ":") == -1)
		return (1);
	*val++ = 0;
	while (find_char(*val, " ") != -1)
		val++;
	if (!ft_strlen(num) || !ft_strlen(val))
		return (1);
	trie_insert(trie, ft_rstrip(num, " "), ft_rstrip(val, " "));
	line[0] = 0;
	return (0);
}

int	load_trie(t_trie *trie, char *fname)
{
	char	line[BUFFER_SIZE * 8];
	char	buf[2];
	int		fd;

	init_buffers(line, BUFFER_SIZE * 8);
	init_buffers(buf, 2);
	fd = open(fname, O_RDONLY);
	if (fd == -1)
		return (1);
	while (1)
	{
		if (read(fd, buf, 1) < 1)
			break ;
		if (buf[0] == '\n' && process_line(trie, line))
			break ;
		else if (buf[0] != '\n')
			ft_strcat(line, buf);
	}
	if (fd > 2)
		close(fd);
	if (ft_strlen(line) && process_line(trie, line))
		return (1);
	return (0);
}
