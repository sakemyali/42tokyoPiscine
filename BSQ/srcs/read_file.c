/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkono <tkono@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:27:57 by tkono             #+#    #+#             */
/*   Updated: 2025/09/24 22:22:02 by tkono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*join_buf(char *res, int size, char *buf, int r)
{
	char	*tmp;
	int		i;
	int		j;

	tmp = (char *)malloc(size + r + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = res[i];
		i++;
	}
	j = 0;
	while (j < r)
	{
		tmp[size + j] = buf[j];
		j++;
	}
	tmp[size + r] = '\0';
	free(res);
	return (tmp);
}

char	*read_file_all(char *path)
{
	int		fd;
	int		r;
	int		size;
	char	buf[BUF_SIZE];
	char	*res;

	fd = open(path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	size = 0;
	res = (char *)malloc(sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	r = read(fd, buf, BUF_SIZE);
	while (r > 0)
	{
		res = join_buf(res, size, buf, r);
		if (!res)
			return (NULL);
		size += r;
		r = read(fd, buf, BUF_SIZE);
	}
	close(fd);
	return (res);
}

char	*read_file_std_all(void)
{
	int		r;
	int		size;
	char	buf[BUF_SIZE];
	char	*res;

	size = 0;
	res = (char *)malloc(sizeof(char));
	if (!res)
		return (NULL);
	res[0] = '\0';
	r = read(0, buf, BUF_SIZE);
	while (r > 0)
	{
		res = join_buf(res, size, buf, r);
		if (!res)
			return (NULL);
		size += r;
		r = read(0, buf, BUF_SIZE);
	}
	return (res);
}
