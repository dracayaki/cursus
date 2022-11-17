/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:03:30 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 18:59:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
devuelve el tamaño el str
*/
size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/* int	main(void)
{
	char	*string;

	string = "Hola como estas";
	printf("%d\n", ft_strlen(string));
	printf("%lu\n", strlen(string));
}
*/