/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:05:40 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:59:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Busca la secuencia de carácteres contenida 
en la subcadena en una cadena de texto. len es el 
tamaño de lo que queremos buscar
*/
char	*ft_strnstr(const char *s2, const char *s1, unsigned long len)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	if (*s1 == '\0')
		return ((char *)s2);
	while (s2[i] != '\0')
	{
		j = 0;
		while (s2[i + j] == s1[j] && (i + j) < len && s2[i + j] && s1[j])
		{
			if (s1[j + 1] == '\0')
				return ((char *)&s2[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/* int	main(void)
{
	char			str[17];
	char			to_find[4];
	unsigned long	len;

	str[17] = "hola como estamos";
	to_find[4] = "hola";
	len = 4;
	printf("%s\n", ft_strnstr(str, to_find, len));
	printf("%s", strnstr(str, to_find, len));
}
*/