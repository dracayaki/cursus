/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:42:41 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 17:31:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
devuelve 1 si es alfanumérico o 0 si no lo es
*/
int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/* int	main(void)
{
	int	n;

	n = 'a';
	printf("%d\n", ft_isalnum(n));
	n = '5';
	printf("%d\n", ft_isalnum(n));
	n = '%';
	printf("%d\n", ft_isalnum(n));
	n = 'P';
	printf("%d\n", ft_isalnum(n));
}
*/