/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:10:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/07/05 18:17:33 by mmagma-g         ###   ########.fr       */
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
	if (!stash)
		return (0);
	while (stash[i] && stash[i] != 0)
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (0);
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
	return (line);
}

char	*ft_get_next(char *stash)
{
	char	*nxt;
	size_t	i;
	size_t	j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	nxt = ((char *)malloc(sizeof(char) * ft_strlen(stash) - i +1));
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
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	stash = ft_read(fd, stash);
	if (!stash)
		return (0);
	line = ft_get_line(stash);
	stash = ft_get_next(stash);
	return (line);
}

int	main(void)
{
	int	fd;

	fd = open("random", O_RDONLY);
	printf("%s|", get_next_line(fd));
	close(fd);
}
