/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 19:02:38 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/01/31 20:35:24 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*clean_stash(char *stash)
{
	int		i;
	int		len;
	char	*tmp;

	if (!stash)
		return (NULL);
	tmp = NULL;
	i = 0;
	len = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	len = ft_strlen(stash) - i;
	tmp = ft_substr(stash, i, len + 1);
	if (!tmp)
		return (ft_free(&stash));
	ft_free(&stash);
	return (tmp);
}

char	*fill_line(char *stash)
{
	int		len;
	char	*result;

	len = 0;
	while (stash[len])
	{
		if (stash[len] == '\n')
		{
			if (len == 0)
				len = 1;
			else
				len++;
			break ;
		}
		len++;
	}
	result = ft_substr(stash, 0, len);
	if (!result || len == 0)
		return (ft_free(&result));
	return (result);
}

char	*read_buf(int fd, char *stash)
{
	int		read_bytes;
	char	*buf;

	read_bytes = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (ft_free(&stash));
	buf[0] = '\0';
	while (read_bytes > 0 && (stash == NULL || !ft_strchr(stash, '\n')))
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes > 0)
		{
			buf[read_bytes] = '\0';
			stash = ft_strjoin_free(stash, buf);
			if (!stash)
				break ;
		}
	}
	free(buf);
	if (read_bytes == -1 || !stash)
		return (ft_free(&stash));
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash = NULL;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if ((stash && !ft_strchr(stash, '\n')) || !stash)
		stash = read_buf(fd, stash);
	if (!stash)
		return (NULL);
	line = fill_line(stash);
	if (!line)
		return (ft_free(&stash));
	stash = clean_stash(stash);
	return (line);
}
