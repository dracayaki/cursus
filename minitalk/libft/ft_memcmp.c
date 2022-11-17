/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:17:15 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:40:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función memcmp compara los primeros n caracteres del objeto
 al cual señala s1 con los primeros n caracteres del objeto al cual
señala s2. La función memcmp devuelve un entero mayor que, igual a
o menor que cero, según si el objeto al cual señala s1 es mayor que, 
igual a o menor que el objeto al cual señala s2.
*/
int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned char	*p;
	unsigned char	*q;
	unsigned long	i;

	p = (unsigned char *)s1;
	q = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p[i] == q[i])
			i++;
		else
			return (p[i] - q[i]);
	}
	return (0);
}
/* 
int main()
{
    char str1[] = "holrgklr";
    char str2[] = "holbb";
    unsigned long size;

    size = 7;
    printf("%d\n", ft_memcmp(str1, str2, size));
    printf("%d", memcmp(str1, str2, size));
}
*/
