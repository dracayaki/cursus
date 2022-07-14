/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:44:16 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/14 12:48:31 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *stash)
{
	char	*buff;
	int		size;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	size = 1;
	while (!ft_strchr(stash, '\n') && size != 0)
	{
		size = read(fd, buff, BUFFER_SIZE);
		if (size == -1)
		{
			free(buff);
			free(stash);
			return (NULL);
		}
		buff[size] = '\0';
		stash = ft_strjoin(stash, buff);
	}
	free(buff);
	return (stash);
}

char	*ft_get_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_save_next(char *stash)
{
	char	*nxt;
	int		i;
	int		j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	nxt = (char *)malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!nxt)
		return (0);
	i++;
	j = 0;
	while (stash[i])
		nxt[j++] = stash[i++];
	nxt[j] = '\0';
	free(stash);
	return (nxt);
}

char	*get_next_line(int fd)
{
	static char	*stash[256];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (0);
	stash[fd] = ft_read(fd, stash[fd]);
	if (!stash[fd])
		return (0);
	line = ft_get_line(stash[fd]);
	stash[fd] = ft_save_next(stash[fd]);
	return (line);
}
