/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagma-g <mmagma-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:15:50 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/12 19:08:18 by mmagma-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
lst: la dirección de un puntero al primer nodo de
una lista.
new: un puntero al nodo que añadir al principio de
la lista.
Añade el nodo ’new’ al principio de la lista ’lst’.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		new->next = NULL;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
