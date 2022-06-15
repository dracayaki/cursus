/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:40:17 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/30 12:40:18 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*ft_make_string(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		num;
	int		i;

	if (!s)
		return (0);
	i = 0;
	num = ft_count_words(s, c);
	result = (char **)malloc((num + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			result[i] = ft_make_string(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

/*
int	main(void)
{
	char	s[];

	s[] = "Hola pepito grillo";
	printf("%s", ft_split(s, ' ')[0]);
}
*/