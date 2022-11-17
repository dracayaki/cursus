/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:44:16 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 19:05:15 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función strchr localiza la primera instancia de c
 (convertido a un char) en la cadena a la cual señala s.
  El carácter nulo de terminación se considera como parte 
  de la cadena. La función strchr devuelve un apuntador al 
  carácter localizado, o un apuntador nulo si el carácte no 
  está incluído en la cadena.
*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (0);
}
/*
 int	main(void)
{
	const char	str[];
	const char	ch;
	char		*ret;
    char *proof;

	str[] = "hola hol como es";
	ch = ' ';
    proof = ft_strchr(str, ch);
	printf("%c\n %s\n", ch, proof);
	ret = strchr(str, ch);
	printf("%c\n %s\n", ch, ret);
}
*/
