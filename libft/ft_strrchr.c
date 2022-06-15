/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 13:16:33 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 19:05:50 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
La función strrchr localiza la última instancia de c 
(convertido a char) en la cadena
 a la cual señala s. El carácter nulo de terminación se 
 considera como parte de la cadena.
  La función strrchr devuelve un apuntador al carácter,
	o un apuntador nulo si c no está
   incluído en la cadena.
*/
char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	while (s[i] != '\0')
		i++;
	p = (char *)s;
	while (i >= 0)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i--;
	}
	return (0);
}
/* int	main(void)
{
	const char	str[];
	const char	ch;
	char		*ret;

	str[] = "Hola me llamo ralph";
	ch = 'l';
	printf("%s\n", ft_strrchr(str, ch));
	ret = strrchr(str, ch);
	printf("%s\n", ret);
	return (0);
}
*/