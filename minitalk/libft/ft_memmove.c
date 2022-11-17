/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:04:34 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:40:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copia los primeros n caracteres del 
objeto apuntado por s2 al objeto apuntado
por s1.Sin embargo, se asegura de que no estén superpuestos.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			*((char *)dst + len - 1) = *((char *)src + len - 1);
			len--;
		}
	}
	return (dst);
}
/* int	main(void)
{
	char		dest[] = "oldstring";
 char	src[] = "holaquetal";
    size_t size;
    
size = 7;
    printf("%s\n", ft_memmove(dest, src, size));
	printf("%s\n", memmove(dest, src, size));
	return (0);
}
*/