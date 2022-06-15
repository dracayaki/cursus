/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:10:25 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 19:17:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
convierte la mayúscula en minúscula
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/* int	main(void)
{
	int		letter;
	int		str;
	char	s;
	char	lower;

	letter = 'H';
	str = 'H';
	lower = ft_tolower(letter);
	printf("%c\n", lower);
	s = tolower(str);
	printf("%c\n", s);
}
*/