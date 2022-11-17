/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:51:49 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/17 13:21:26 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copia n caracteres desde el área de almacenamiento 
de la cadena 1 cadena 2 área de almacenamiento.
*/
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
/* int main()
{
    char src[] = "Hola Mundo";
    char dest[] = "patitos";
    unsigned long size;

    size = 10;    
    ft_memcpy(dest, src, size);
    printf("%s\n", dest);
    memcpy(dest, src, size);
    printf("%s\n", dest);
}
*/
