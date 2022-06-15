/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 14:34:11 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:40:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función memchr localiza la primera instancia de c
(convertida a un unsigned char) en los n caracteres iniciales
(cada uno de ellos interpretados como un unsigned char)
del objeto al cual señala s. La función memchr devuelve un 
apuntador al caracter localizado, o un apuntador nulo si el 
carácter no existe en el objeto.
*/

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned char	*str;
	unsigned long	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/* int main()
{
    char src[] = "Hola que tal";

    printf("%s\n", ft_memchr(src, 'l', 2));
    printf("%s\n", memchr(src, 'l', 2));
}
*/
