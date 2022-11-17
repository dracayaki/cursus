/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:09:59 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 17:32:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
devuelve 1 si es imprimible o 0 si no lo es
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* int	main(void)
{
	int	n;

	n = '\0';
	printf("%d\n", ft_isprint(n));
	n = 'N';
	printf("%d\n", ft_isprint(n));
}
*/