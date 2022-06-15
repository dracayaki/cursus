/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:22:04 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:59:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
reserva espacio con malloc, y devuelve una nueva string
formada por la concatenación de s1 y s2
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = malloc(sizeof(char) * ft_strlen((char *)s1) + ft_strlen((char *)s2)
			+ 1);
	if (!s1 || !s2 || !s)
		return (NULL);
	while (s1[i])
		s[j++] = s1[i++];
	i = 0;
	while (s2[i])
		s[j++] = s2[i++];
	s[j] = '\0';
	return (s);
}
/* int main()
{
    char s1[] = "Rage against ";
    char s2[] = "the machine";
    
    printf("%s", ft_strjoin(s1, s2));
}
*/