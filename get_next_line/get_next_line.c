/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:10:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/06/30 17:12:28 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *stash)
{
	char	*buff;
	char	*del;
	int		size;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	size = 1;
	while (!ft_strchr(buff, '\n') && size > 0)
	{
		size = read(fd, buff, BUFFER_SIZE);
		if (size < 1)
			return (NULL);
		del = stash;
		stash = ft_strjoin(stash, buff);
		free(del);
	}	
	return (stash);
}

char	*ft_get_line(char *stash)
{
	char		*line;
	size_t		i;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (malloc(sizeof(char *) * (i + 2)));
	if (!line)
		return (NULL);
	ft_memcpy(line, stash, i +2);
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

char	*ft_get_next_line(char *stash)
{
	char	*nxt;
	size_t	i;

	i = 0;
	while (stash[i] != '\n')
	{
			i++;
		if (stash [i] != '\0')
				i++;
	}
	nxt = ((char *)malloc(sizeof(char) * (i + 2)));
	i = 0;
	while (stash[i] != '\n')
	{
			i++;
		while (stash[i] == '\n')
		{
			nxt[i] = stash[i];
			if (stash[i] != '\n')
				nxt[i] = stash[i];
			i++;
		}
	}
	return (nxt);
}

char	*get_next_line(int fd)
{
	char		*new;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	new = ft_get_next_line(stash);
	stash = ft_get_line(stash);
	return (new);
}

int	main(void)
{
	int	fd;

	fd = open("random", O_RDONLY);
	printf("%s|", get_next_line(fd));
	close(fd);
}
