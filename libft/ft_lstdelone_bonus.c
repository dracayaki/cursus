/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:08:37 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 19:08:25 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst: el nodo a liberar.
del: un puntero a la función utilizada para liberar
el contenido del nodo.
Toma como parámetro un nodo ’lst’ y libera la
memoria del contenido utilizando la función ’del’
dada como parámetro, además de liberar el nodo. La
memoria de ’next’ no debe liberarse.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
		lst = 0;
	}
}
