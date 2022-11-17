/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:30:24 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:59:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
compara las cadenas s1 y s2. Devuelve 
<0 si s1 < s2
>0 si s1 > s2
=0 s1 = s2
pero compara los primeros n caracteres
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
		i++;
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* int	main(void)
{
	char	c1[3];
	char	c2[3];
	int		i;
	int		s;

	c1[3] = "abc";
	c2[3] = "acd";
	i = ft_strncmp(c1, c2, 3);
	printf("%d ", i);
	s = strncmp(c1, c2, 3);
	printf("%d ", s);
	return (0);
}
*/
