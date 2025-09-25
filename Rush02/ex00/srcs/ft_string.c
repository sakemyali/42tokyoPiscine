/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchepush <dchepush@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 15:35:40 by dchepush          #+#    #+#             */
/*   Updated: 2025/09/20 15:35:40 by dchepush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_char(char ch, char *str)
{
	char	*cur;

	cur = str;
	while (*cur)
		if (*cur++ == ch)
			return (--cur - str);
	return (-1);
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		str++;
		cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (*src)
		str[i++] = *src++;
	str[i] = 0;
	return (str);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*cur;

	cur = dest;
	while (*cur)
		cur++;
	while (*src)
		*cur++ = *src++;
	*cur = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(sep) * (size - 1);
	if (!size)
		len = 1;
	i = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[0] = 0;
	i = 0;
	while (i < size - 1)
	{
		ft_strcat(str, strs[i++]);
		ft_strcat(str, sep);
	}
	if (i == size - 1)
		ft_strcat(str, strs[i]);
	return (str);
}
