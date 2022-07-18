/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:45:19 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/03/27 18:35:56 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	contador;
	int	aux;

	contador = 0;
	while (contador < size / 2)
	{
		aux = tab[contador];
		tab[contador] = tab[size - 1 - contador];
		tab[size - 1 - contador] = aux;
		contador++;
	}
}
