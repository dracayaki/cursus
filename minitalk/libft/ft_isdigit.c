/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:27:55 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 17:32:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
devuelve 1 si es un numero o 0 si no lo es 
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* int	main(void)
{
	int	number;

	number = '5';
	printf("%d\n", ft_isdigit(number));
	number = '%';
	printf("%d\n", ft_isdigit(number));
}
*/