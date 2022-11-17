/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:42:13 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 18:57:35 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
La función calloc asigna espacio de almacenamiento para una matriz
 de elementos number, cada uno de bytes de tamaño de longitud.
  Cada elemento se inicializa en 0.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if ((count * size) < count && (count * size) < size)
		return (0);
	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, (count * size));
	return (p);
}
/* int	main(void)
{
	int	*a;
    int *b;
	int	i;
	int	n;

	i = 2;
	n = 3;
	a = (int *)ft_calloc(n, sizeof(int));
	printf("The numbers entered are: ");
	while (i < n)
	{
		printf("%d |", a[i]);
		i++;
	}
	return (0);
    	b = (int *)calloc(n, sizeof(int));
	printf("The numbers entered are: \n");
	while (i < n)
	{
		printf("%d \n", b[i]);
		i++;
	}
	return (0);
}
*/