/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:16:42 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:40:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función memset copia el valor de c (convertido a
 un unsigned char) a cada uno de los primeros n 
 caracteres en el objeto al cual señala s.
  La función memset devuelve el valor de s.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/* int	main(void)
{
	char			b[] = "Hola";
	int				repeat;
	unsigned long	size;

	repeat = '$';
	size = 7;
	printf("%s\n", ft_memset(b, repeat, size));
	printf("%s\n", memset(b, repeat, size));
}
*/