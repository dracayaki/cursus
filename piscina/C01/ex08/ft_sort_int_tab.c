/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:41:01 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/03/27 18:59:02 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)

{
	int	contador;
	int	contador2;
	int	aux;

	contador = 0;
	while (contador < size)
	{
		contador2 = contador + 1;
		while (contador2 < size)
		{
			if (tab[contador] > tab[contador2])
			{
				aux = tab[contador];
				tab[contador] = tab[contador2];
				tab[contador2] = aux;
			}
			contador2++;
		}
		contador++;
	}
}
