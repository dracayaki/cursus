/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:48:21 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/06/30 17:02:47 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	while (*s != 0 && *s != c)
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}

size_t	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

void	*ft_memcpy(void *dest, const void *src, unsigned long n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned long	i;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dest;
	if (dest == src || !n)
		return (dest);
	i = 0;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
	{
		return (NULL);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)

{
	char	*str;
	int		len;
	int		i;
	int		j;
	if (!s1)
		return (ft_strdup(s2));
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((len + 1) * sizeof(char));
	i = 0;
	while (s1[i] != 0)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[len] = 0;
	return (str);
}
