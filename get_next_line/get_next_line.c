/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:10:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/06/15 18:52:53 by mmagma-g         ###   ########.fr       */
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
	char	*str;
	int		i;

	i = 0;
	str = ((char *)malloc(sizeof(char) * (i + 2)));
	while (stash[i] != '\n')
	{	
		str[i] = stash[i];
		i++;
	}
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
	printf("%s|", get_next_line(fd));
	close(fd);
}
