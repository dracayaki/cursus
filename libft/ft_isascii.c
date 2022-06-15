/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:57:54 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 17:32:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
devuelve 1 si esta en la tabla ascii o 0 si no lo es
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(void)
{
	int	n;

	n = '\0';
	printf("%d\n", ft_isascii(n));
	n = '~';
	printf("%d\n", ft_isascii(n));
	n = 'm';
	printf("%d\n", ft_isascii(n));
}
*/