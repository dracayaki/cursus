/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:34:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 19:08:15 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst: el puntero al primer nodo de una lista.
new: el puntero a un nodo que añadir a la lista.
Añade el nodo ’new’ al final de la lista ’lst’
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (*lst != NULL)
	{
		node = ft_lstlast(*lst);
		node->next = new;
	}
	else
		*lst = new;
}
