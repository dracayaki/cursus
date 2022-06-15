/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:46:45 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 17:32:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
devuelve 1 si es una letra y 0 si no lo es
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97
			&& c <= 122))
		return (1);
	return (0);
}

/* int	ft_isalpha(int argument);

int	main(void)
{
	char	c;

	c = 'A';
	printf("%d\n", ft_isalpha(c));
	c = '5';
	printf("%d\n", ft_isalpha(c));
}
*/
