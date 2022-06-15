/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:24:22 by mmagma-g          #+#    #+#             */
/*   Updated: 2022/05/03 19:17:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
convierte la minúscula en mayúscula
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/* int	main(void)
{
	int		letter;
	int		str;
	char	s;
	char	upper;

	letter = 'h';
	str = 'h';
	upper = ft_toupper(letter);
	printf("%c\n", upper);
	s = toupper(str);
	printf("%c\n", s);
}
*/