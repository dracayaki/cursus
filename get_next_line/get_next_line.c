/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:10:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/06/13 18:12:20 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *stash)
{
	char	*buff;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read(fd, buff, BUFFER_SIZE);
	while (!ft_strchr(buff, '\n'))
	{
		read(fd, buff, BUFFER_SIZE);
		stash = ft_strjoin(stash, buff);
	}
	free(buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;

	stash = ft_read(fd, stash);
	return (stash);
}

int	main(void)
{
	int	fd;

	fd = open("random", O_RDONLY);
	printf("%s", get_next_line(fd));
	close(fd);
}
